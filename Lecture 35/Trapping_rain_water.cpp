class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int total_water = 0;
        int current = 0;

        while (current < height.size()) {
            //Kuch Kaam hain:
            while (!st.empty() and height[current] > height[st.top()]) {
                //Task?
                int top = st.top();
                st.pop();
                if (st.empty()) {
                    break;
                }

                int x = current - st.top() - 1;
                int y = (min(height[st.top()], height[current]) - height[top]);
                total_water += (x * y);
            }
            st.push(current);
            current++;
        }
        return total_water;
    }
};