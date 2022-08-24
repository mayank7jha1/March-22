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
    ListNode* mid(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL and fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    void ReverseLL(ListNode* &head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* n;

        while (current != NULL) {
            n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }
        head = prev;
    }
public:
    void reorderList(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return;
        }

        ListNode* m = mid(head);
        ListNode* h = head;
        ListNode* h1 = m->next;
        m->next = NULL;
        ReverseLL(h1);
        ListNode* x; ListNode* y;
        while (h1) {
            x = h->next;
            y = h1->next;
            h->next = h1;
            h = x;
            h1->next = h;
            h1 = y;
        }
    }
};