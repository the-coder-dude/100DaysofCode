#include<bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
	int key; 
	Node *left, *right; 
}; 

Node *newNode(int item) 
{ 
	Node *temp = new Node; 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

void secondLargestUtil(Node *root, int &c) 
{ 
	if (root == NULL || c >= 2) 
		return; 

	secondLargestUtil(root->right, c); 
 
	c++; 

	if (c == 2) 
	{ 
		cout << "2nd largest element is "
			<< root->key << endl; 
		return; 
	} 

	secondLargestUtil(root->left, c); 
} 


void secondLargest(Node *root) 
{
	int c = 0; 

	secondLargestUtil(root, c); 
} 

Node* insert(Node* node, int key) 
{ 

	if (node == NULL) return newNode(key); 

	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	return node; 
} 

int main() 
{ 
	Node *root = NULL; 
	root = insert(root, 50); 
	insert(root, 30); 
	insert(root, 20); 
	insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); 

	secondLargest(root); 

	return 0; 
} 
