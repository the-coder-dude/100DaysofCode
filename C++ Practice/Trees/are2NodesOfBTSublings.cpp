#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return (node);
}

bool CheckIfNodesAreSiblings(Node* root, int data_one,
							int data_two)
{
	if (!root)
		return false;

	if (root->left && root->right) {
		int left = root->left->data;
		int right = root->right->data;

		if (left == data_one && right == data_two)
			return true;
		else if (left == data_two && right == data_one)
			return true;
	}

	if (root->left)
		CheckIfNodesAreSiblings(root->left, data_one,
								data_two);

	if (root->right)
		CheckIfNodesAreSiblings(root->right, data_one,
								data_two);
}

int main()
{

	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->left = newNode(5);
	root->right->right = newNode(6);
	root->left->left->right = newNode(7);

	int data_one = 5;
	int data_two = 6;

	if (CheckIfNodesAreSiblings(root, data_one, data_two))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
