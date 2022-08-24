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
        vector<int>ans;
        while (head) {
            ListNode *temp = head;
            while (temp != NULL and temp->val <= head->val) {
                temp = temp->next;
            }
            if (temp != NULL) {
                ans.push_back(temp->val);
            } else {
                ans.push_back(0);
            }
            head = head->next;
        }
        return ans;
    }
};