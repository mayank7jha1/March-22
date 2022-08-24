/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;  //store the linked list in a vector
        while (head) {
            arr.push_back(head->val);
            head = head->next;
        }

        stack<int>st;
        int n = arr.size();
        st.push(arr[n - 1]); //push the last element
        vector<int>ans;
        ans.push_back(0);  //as the last element will always give 0 as output

        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[i] >= st.top()) {
                st.pop(); //if the current element is greater than the top keep popping
            }

            if (st.empty()) {
                ans.push_back(0); //greater element in stack == arr[i] then push 0
            }
            else {
                ans.push_back(st.top());
                //else push the greater element right next to the current num arr[i]
            }
            st.push(arr[i]);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};