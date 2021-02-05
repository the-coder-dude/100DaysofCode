//counting nodes in tree

#include <bits/stdc++.h> 
using namespace std; 

struct node 
{ 
	int data; 
	struct node* left; 
	struct node* right; 
}; 

unsigned int leafNodeofTree(struct node* node) 
{ 
	if(node == NULL)	 
		return 0; 
	if(node->left == NULL && node->right == NULL) 
		return 1;		 
	else
		return leafNodeofTree(node->left)+ 
			leafNodeofTree(node->right); 
} 

struct node* newNode(int data) 
{ 
	struct node* node = (struct node*) 
					malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	
return(node); 
} 


int main() 
{
	struct node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	

cout << "Leaf count of tree: "<<leafNodeofTree(root) << endl; 
return 0; 
} 