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
    int numComponents(ListNode* head, vector<int>& nums) {
        int s[100001] = {0};
        for (int i = 0; i < nums.size(); i++) {
            s[nums[i]]++;
        }

        int components = 0;
        while (head != NULL) {
            if (s[head->val] == 1 and ((head->next == NULL or s[head->next->val] == 0))) {
                components++;
            }
            head = head->next;
        }
        return components;
    }
};