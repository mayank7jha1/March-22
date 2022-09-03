#include <bits/stdc++.h>
using namespace std;

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

void Print(node *head) {
	// node *temp = head;
	//Iterate:
	while (head != NULL) {
		cout << (*head).data << "->";
		head = head->next;
	}
	cout << endl;
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


void InsertAtTail(node*&head, int value) {
	if (head == NULL) {
		/*node *n = new node(value);
		head=n;*/
		head = new node(value);
		return;
	}
	node *temp = head;
	//Tum last me rukna chahte ho!:
	while (temp->next != NULL) {
		temp = temp->next;
	}
	/*node *n = new node(value);
	temp->next = n;*/
	temp->next = new node(value);
	// cout<<endl;
	return;
}

node *midPoint1(node *head) {
	int mid = length(head);
	mid = mid / 2;

	node*temp = head;
	while (mid > 0) {
		temp = temp->next; //i++
		mid--;
	}
	return temp;
}

int midPoint(node* head) {
	int mid = length(head);
	mid = mid / 2;

	node*temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp->data;
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


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	node *head = NULL;
	node *head1 = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
		InsertAtTail(head1, x);
	}
	int key;
	cin >> key;
	Print(head);
	Print(head1);
	cout << length(head) << endl;
	cout << length(head1) << endl;
	cout << searchIterative(head, key) << endl;
	cout << searchRecursive(head1, key) << endl;
	/*cout << midPoint(head) << endl;
	cout << midPoint1(head)->data << endl;*/
	cout << midPointNormal(head)->data << endl;

}