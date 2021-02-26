#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;
};

struct node* newNode(int data)
{
	struct node *temp = new struct node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int sumOfGrandChildren(node* node);
int getMaxSum(node* node);
int getMaxSumUtil(node* node, map<struct node*, int>& mp);

int sumOfGrandChildren(node* node, map<struct node*, int>& mp)
{
	int sum = 0;

	if (node->left)
		sum += getMaxSumUtil(node->left->left, mp) +
			getMaxSumUtil(node->left->right, mp);

	if (node->right)
		sum += getMaxSumUtil(node->right->left, mp) +
			getMaxSumUtil(node->right->right, mp);

	return sum;
}

int getMaxSumUtil(node* node, map<struct node*, int>& mp)
{
	if (node == NULL)
		return 0;

	if (mp.find(node) != mp.end())
		return mp[node];

	int incl = node->data + sumOfGrandChildren(node, mp);

	int excl = getMaxSumUtil(node->left, mp) + getMaxSumUtil(node->right, mp);

	mp[node] = max(incl, excl);

	return mp[node];
}

int getMaxSum(node* node)
{
	if (node == NULL)
		return 0;
	map<struct node*, int> mp;
	return getMaxSumUtil(node, mp);
}

int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->left->left = newNode(1);

	cout << getMaxSum(root) << endl;
	return 0;
}
