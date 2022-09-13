class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int n = a.size();

        for (int i = 0; i < n; i++) {
            int x = a[i];

            if (!s.empty() and s.top() > 0 and x < 0) {
                bool flag = true;
                while (!s.empty() and s.top() > 0 and x < 0) {
                    if (abs(x) == abs(s.top())) {
                        flag = false;
                        s.pop();
                        break;
                    } else if (abs(x) > abs(s.top())) {
                        flag = true;
                        s.pop();
                        continue;
                    } else {
                        flag = false;
                        break;
                    }
                }
                if (flag == true) {
                    s.push(x);
                }

            } else {
                //No Collison
                s.push(x);
            }
        }

        vector<int>ans(s.size());
        int k = s.size() - 1;
        while (!s.empty()) {
            ans[k--] = s.top();
            s.pop();
        }
        return ans;
    }
};