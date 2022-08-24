
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
	int getDecimalValue(ListNode* head) {
		ListNode* head2 = head;
		int binary_number = 0;
		while (head2 != NULL) {
			int value = head2->val;
			binary_number = (2 * binary_number) + value;
			head2 = head2->next;
		}
		return binary_number;
	}
};