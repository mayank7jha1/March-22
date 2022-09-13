class Solution {
public:
    string decodeAtIndex(string a, int k) {
        stack<pair<string, long long>>s;

        for (int i = 0; i < a.length; i++) {
            string x = "";

            while (i<a.length() and a[i]>'9') {
                x = x + a[i];
                i++;
            }
            //x=code:
            //a[i]=3;

            long long l = (x.length() +
                           (s.empty() ? 0 : s.top().second)) * (a[i] - '0');

            s.push({x, l});//leet,8-->code,36
            if (l >= k) {
                break;
            }
        }


        while (!s.empty()) {
            auto p = s.top();//p=={code,36};

            string x = p.first;//x=code
            long long l = p.second;//36
            s.pop();//leet,8

            k = k % (x.length() + ((s.empty() ? 0 : s.top().second)));

            if (k == 0) {
                k = x.length() + ((s.empty() ? 0 : s.top().second));
            }

            if (s.empty()) {
                string ans = "";
                ans += x[k - 1];
                return ans;
            }



            if (k > s.top().second) {
                string ans = "";
                ans += x[k - s.top().second - 1];
                return ans;
            }
        }
        return "";
    }
};