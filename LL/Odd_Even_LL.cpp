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
	ListNode* oddEvenList(ListNode* head) {
		if (head == NULL or head->next == NULL) {
			return head;
		}
		ListNode* evenhead = NULL, *oddhead = NULL, *p = NULL, *c = NULL, *n = NULL;
		oddhead = head;
		evenhead = head->next;
		c = head;
		int jump = 0;
		while (c and c->next) {
			n = c->next;
			c->next = n->next;
			p = c;
			c = n;
			jump++;
		}
		if (jump % 2 == 0) {
			c->next = evenhead;
		} else {
			p->next = evenhead;
		}
		return oddhead;
	}
};