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



int main() {

	node* root1 = buildTree();
	//mirror(root1 );
	preorder(root1);
	cout << endl;
	/*
		inorder(root1);
		cout << endl;

		postorder(root1);
		cout << endl;
		cout << countnodes(root1) << endl;
		cout << sumofNodes(root1) << endl;
		cout << height(root1) << endl;
	*/

	node* root2 = buildTree();
	preorder(root2);
	cout << endl << diameter(root1) << endl;;
	Pair x = fastdiameter(root1);
	cout << x.diameter << " " << x.height << " " << endl;
	pair<int, int>p3 = fastdiameter2(root1);
	cout << p3.second << " " << p3.first << " " << endl;

	Pair3 p4 = isheightbalanced(root1);
	cout << p4.isbalanced << " " << p4.height << " " << endl;


}