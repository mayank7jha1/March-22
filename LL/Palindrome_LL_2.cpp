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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode *temp = head;
        while (temp != NULL) {
            s.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (!s.empty()) {
            int value = s.top();
            s.pop();
            if (value != temp->val) {
                return false;
            }
            temp = temp->next;
        }
        return true;
    }
};



//H.W====O(1);