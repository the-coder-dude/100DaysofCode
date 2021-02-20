#include<bits/stdc++.h> 
using namespace std; 

const char MARKER = '$'; 

struct Node 
{ 
	char key; 
	Node *left, *right; 
}; 
 
Node* newNode(char key) 
{ 
	Node* node = new Node; 
	node->key = key; 
	node->left = node->right = NULL; 
	return node; 
} 

unordered_set<string> subtrees; 

string dupSubUtil(Node *root) 
{ 
	string s = ""; 

	if (root == NULL) 
		return s + MARKER; 

	string lStr = dupSubUtil(root->left); 
	if (lStr.compare(s) == 0) 
	return s; 

	string rStr = dupSubUtil(root->right); 
	if (rStr.compare(s) == 0) 
	return s; 

	s = s + root->key + lStr + rStr; 

	if (s.length() > 3 && 
		subtrees.find(s) != subtrees.end()) 
	return ""; 

	subtrees.insert(s); 

	return s; 
} 

int main() 
{ 
	Node *root = newNode('A'); 
	root->left = newNode('B'); 
	root->right = newNode('C'); 
	root->left->left = newNode('D'); 
	root->left->right = newNode('E'); 
	root->right->right = newNode('B'); 
	root->right->right->right = newNode('E'); 
	root->right->right->left= newNode('D'); 

	string str = dupSubUtil(root); 

	(str.compare("") == 0) ? cout << " Yes ": cout << " No " ; 
	return 0; 
} 
