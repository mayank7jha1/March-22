#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};

node *buildTree() {
	int value;
	cin >> value;
	if (value == -1) {
		return NULL;
	} else {
		node* root = new node(value);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}
}


void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);

}
void inorder(node* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
void postorder(node* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int countnodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int x = countnodes(root->left);
	int y = countnodes(root->right);
	int ans = x + y + 1;
	return ans;
}

int sumofNodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int x = sumofNodes(root->left);
	int y = sumofNodes(root->right);
	int ans = x + y + root->data;
	return ans;
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}
	int x = height(root->left);
	int y = height(root->right);

	/*int ans = max(x, y) + 1;
	return ans;*/
	return max(x, y) + 1;
}

void mirror(node* &root) {
	if (root == NULL) {
		return;
	}
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}


int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}

	int option1 = diameter(root->left);
	int option2 = diameter(root->right);
	int option3 = height(root->left) + height(root->right);

	return max({option1, option2, option3});
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastdiameter(node* root) {
	Pair p;

	if (root == NULL) {
		p.diameter = 0;
		p.height = 0;
		return p;
	}

	Pair left_subtree = fastdiameter(root->left);
	Pair rigt_subtree = fastdiameter(root->right);
	p.height = max(left_subtree.height, rigt_subtree.height) + 1;

	p.diameter = max({left_subtree.diameter, rigt_subtree.diameter,
	                  left_subtree.height + rigt_subtree.height
	                 });
	return p;
}

pair<int, int>p2;

pair<int, int>fastdiameter2(node* root) {
	pair<int, int> p;

	if (root == NULL) {
		p.second = 0;
		p.first = 0;
		return p;
	}

	pair<int, int> left_subtree = fastdiameter2(root->left);
	pair<int, int> rigt_subtree = fastdiameter2(root->right);
	p.first = max(left_subtree.first, rigt_subtree.first) + 1;

	p.second = max({left_subtree.second, rigt_subtree.second,
	                left_subtree.first + rigt_subtree.first
	               });
	return p;
}

class Pair3 {
public:
	int height;
	bool isbalanced;
};

Pair3 isheightbalanced(node* root) {
	Pair3 p;
	if (root == NULL) {
		p.height = 0;
		p.isbalanced = 1;
		return p;
	}
	Pair3 left_subtree = isheightbalanced(root->left);
	Pair3 right_subtree = isheightbalanced(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	if (left_subtree.isbalanced == 1 and
	        right_subtree.isbalanced == 1 and
	        abs(left_subtree.height - right_subtree.height) <= 1) {
		p.isbalanced = true;
	} else {
		p.isbalanced = false;
	}
	return p;
}

node* buildTreefromArray(int *a, int s, int e) {
	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;
	node* root9 = new node(a[mid]);

	root9->left = buildTreefromArray(a, s, mid - 1);
	root9->right = buildTreefromArray(a, mid, e);
	return root9;
}


void printkthlevel(node* root, int k, int i) {
	if (root == NULL) {
		return;
	}

	if (k == i) {
		cout << root->data << " ";
		return;
	}
	printkthlevel(root->left, k, i + 1);
	printkthlevel(root->right, k, i + 1);
}

void printAllLevel(node* root) {
	int H = height(root);

	for (int i = 1; i <= H; i++) {
		printkthlevel(root, i, 1);
		cout << endl;
	}
}

void bfs(node* root) {
	queue<node*>q;

	q.push(root);

	while (!q.empty()) {
		node* first = q.front();
		q.pop();
		cout << first->data << " ";
		if (first->left != NULL) {
			q.push(first->left);
		}
		if (first->right != NULL) {
			q.push(first->right);
		}
	}
}

void bfs2(node* root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node* first = q.front();
		q.pop();
		if (first == NULL) {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << first->data << " ";
			if (first->left != NULL) {
				q.push(first->left);
			}
			if (first->right != NULL) {
				q.push(first->right);
			}
		}
	}
}

node* buildTreefrompreandin(int *in, int *pre, int s, int e) {
	static int i = 0;

	if (s > e) {
		return NULL;
	}
	node* root = new node(pre[i]);
	int index = -1;
	for (int j = s; j <= e; j++) {
		if (in[j] == pre[i]) {
			index = j;
			break;
		}
	}
	i++;
	root->left = buildTreefrompreandin(in, pre, s, index - 1);
	root->right = buildTreefrompreandin(in, pre, index + 1, e);
	return root;
}

void printRightView(node* root, int level, int &maxlevel) {
	if (root == NULL) {
		return;
	}

	if (maxlevel < level) {
		cout << root->data << " ";
		maxlevel = level;
	}

	printRightView(root->right, level + 1, maxlevel);
	printRightView(root->left, level + 1, maxlevel);
}

int main() {

	// node* root1 = buildTree();
	// //mirror(root1 );
	// preorder(root1);
	// cout << endl;
	/*
		inorder(root1);
		cout << endl;

		postorder(root1);
		cout << endl;
		cout << countnodes(root1) << endl;
		cout << sumofNodes(root1) << endl;
		cout << height(root1) << endl;
	*/

	/*node* root2 = buildTree();
	preorder(root2);
	cout << endl << diameter(root1) << endl;;
	Pair x = fastdiameter(root1);
	cout << x.diameter << " " << x.height << " " << endl;
	pair<int, int>p3 = fastdiameter2(root1);
	cout << p3.second << " " << p3.first << " " << endl;

	Pair3 p4 = isheightbalanced(root1);
	cout << p4.isbalanced << " " << p4.height << " " << endl;

	int a[] = {1, 3, 8, 2, 5, 7, 9, 11, 17};
	node* root4 = buildTreefromArray(a, 0, 8);*/

	// printkthlevel(root1, 2, 1);
	// cout << endl;
	// printAllLevel(root1);
	// cout << endl;
	// bfs(root1);
	// cout << endl;
	// bfs2(root1);
	// cout << endl;
	int in[] = {9, 4, 2, 3, 10};
	int pre[] = {2, 9, 4, 10, 3};
	node* root10 = buildTreefrompreandin(in, pre, 0, 4);
	preorder(root10);
	cout << endl;
	int maxlevel = -1;
	printRightView(root10, 0, maxlevel);
	cout << endl;


}