#include <bits/stdc++.h>
using namespace std;

//Ek block kaisa bana hain: ek basic block of list is known as node:
class node {
public:
	int data;
	node *next;//Self Referencing Pointer 1.
	// Constructor:
	node() {

	}
	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};

void InsertAtHead(node *&head, int value) {
	node *n = new node(value);
	n->next = head;
	head = n;
}

void Print(node *head) {
	// node *temp = head;
	//Iterate:
	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}
}

void reverse(node *&head) {
	node *current = head;
	node*prev = NULL;
	node *n;
	while (current != NULL) {
		n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}
	head = prev;
}

node *reverse_recursively(node *head) {
	//Base Case:
	if (head == NULL or head->next == NULL) {
		return head;
	}

	node *next_head = reverse_recursively(head->next);
	node *c = head;
	c->next->next = c;
	c->next = NULL;
	return next_head;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	node *head = NULL;
	node* head1 = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
		InsertAtHead(head1, x);
	}
	/*Print(head);
	cout << endl;
	reverse(head);
	Print(head);
	cout << endl;*/
	Print(head1);
	cout << endl;
	node* n2 = reverse_recursively(head1);
	Print(n2);

	cout << endl;
}