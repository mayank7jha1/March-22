// Created by Mayank

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

void deleteAtHead(node *&head) {
	if (head == NULL) {
		return;
	}
	node *temp = head;
	head = head->next;
	delete temp;
	return;
}

void searchIterative(node* head) {

}

void Print(node *head) {
	// node *temp = head;
	//Iterate:
	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}
}

int length(node *head) {
	int len = 0;
	node *temp = head;
	//Iterate:
	while (temp != NULL) {
		len++;
		temp = temp->next;
	}
	return len;
}

void InsertAtTail(node*&head, int value) {
	if (head == NULL) {
		head = new node(value);
		return;
	}
	node *temp = head;
	//Tum last me rukna chahte ho!:
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new node(value);
	return;
}


void deleteAtTail(node *&head) {
	node *prev = NULL;//Second last element after the looop
	node *temp = head;//last element after the loop
	while (temp->next != NULL) {
		prev = temp;
		temp = temp->next;
	}
	delete temp;
	prev->next = NULL;
	return;
}


void InsertAtAnyPosition(node *&head, int pos, int value) {
	int length1 = length(head);
	if (pos == 0) {
		InsertAtHead(head, value);
	} else if (pos == length1 + 1) {
		InsertAtTail(head, value);
	} else {
		node *temp = head;
		node *n = new node(value);
		for (int jump = 1; jump < pos; jump++) {
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
	}
}

bool searchIterative(node *head, int key) {
	node *temp = head;//Initialisation:

	while (temp != NULL) {//condition i<n
		if (temp->data == key) {
			return true;
		} else {
			temp = temp->next;//i++
		}
	}
	return false;
}

bool searchRecursive(node *head, int key) {
	node *temp = head;
	if (temp == NULL) {
		return false;
	}

	if (temp->data == key) {
		return true;
	} else {//temp->next=i+1
		return searchRecursive(temp->next, key);
	}
}

//Print the mid point of the link list:

int midPoint(node *head) {
	int mid = length(head);//ek pass hua
	mid = mid / 2;

	node*temp = head;
	while (mid > 0) {//ek pass ye hua
		temp = temp->next;
		mid--;
	}
	return temp->data;
} //O(n+n/2): double pass me kaam horaha hain:

node *midPoint1(node *head) {
	int mid = length(head);
	mid = mid / 2;

	node*temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp;
}


node *midPointNormal(node *head) {
	if (head == NULL or head->next == NULL) {
		//List list has zero or one element:
		return head;
	}
	node *slow = head;
	node *fast = head;
	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}


node *kth(node *head, int k) {
	node *fast = head;
	node *slow = head;
	//COntraint k can never be greater than the length of ll:

	//Step 1=Move the fast pointer k units:
	while (k > 0) {
		fast = fast->next;
		k--;
	}

	//Step 2: Move slow and fast pointer simultaneously:
	while (fast != NULL) {
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}


bool isCycle(node *head) {
	node *fast = head;
	node*slow = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			return true;
		}
	}
	return false;
}

void break_cycle(node *head) {
	node *fast = head;
	node*slow = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			break;
		}
	}
	slow = head;
	node *prev = head;
	//Last node ko represent karega:
	while (prev->next != fast) {
		prev = prev->next;
	}

	while (slow != fast) {
		prev = fast;
		slow = slow->next;
		fast = fast->next;
	}
	prev->next = NULL;
}

void cycle_creation(node *head) {
	node *temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = head->next;
}


node *merge(node *head, node *head1) {
	//Base Case:
	if (head == NULL) {
		return head1;
	}
	if (head1 == NULL) {
		return head;
	}

	node *c;//Just a pointer variable:

	if (head->data < head1->data) {
		c = head;
		c->next = merge(head->next, head1);
	} else {
		c = head1;
		c->next = merge(head, head1->next);
	}
	return c;
}


node *merge2(node *head, node *head1) {
	//Base Case:
	if (head == NULL) {
		return head1;
	}
	if (head1 == NULL) {
		return head;
	}

	node *c; //Just a pointer variable

	if (head->data < head1->data) {
		c = head;
		c->next = merge(head->next, head1);
	} else {
		c = head1;
		c->next = merge(head, head1->next);
	}
	return c;
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
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtTail(head, x);
	}
	Print(head);
	cout << endl;
	//Print(head);
	// cout << endl;

	// InsertAtAnyPosition(head, 4, 15);
	// Print(head);
	// cout << endl;
	// cout << length(head) << endl;
	// cout << searchRecursive(head, 15) << endl;
	// cout << midPoint(head) << endl;

	// node *value = midPoint1(head);
	// cout << value->data << endl;
	// cout << midPointNormal(head)->data << endl;
	// cout << kth(head, 2)->data << endl;
	// cycle_creation(head);
	// cout << isCycle(head) << endl;
	// break_cycle(head);
	// cout << isCycle(head) << endl;

	node *head1 = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtTail(head1, x);
	}

	Print(head1);
	cout << endl;
	// merge2(head, head1);
	// Print(head);
	// cout << endl;
	// Print(head1);
	// cout << endl;
	node *d = reverse_recursively(head);
	Print(d);
	cout << endl;
	return 0;
}