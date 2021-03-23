#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Node 
    {
    ll data; 
    Node *left, *right; 
    Node(ll data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
} * root;

void insert(ll data)
{
    Node* newnode = new Node(data);
    if (root == NULL) 
    {
        root = newnode;
        return;
    }
    else {
        Node* temp = root;
        while (1) {

            if (temp->data > data) 
            {

                if (temp->left == NULL) {
                    temp->left = newnode;
                    break;
                }
                else
                    temp = temp->left;
            }
            else {
                if (temp->right == NULL) {
                    temp->right = newnode;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }
}

void postorder(Node* root)
{
    if (root == NULL)
        return;
    else {
        postorder(root->left);
        postorder(root->right); 
        cout << root->data << " "; 
    }
    return;
}

int main()
{
    ll t;
    cout << "Enter number of test cases: ";
    cin >> t;
    
    while (t--) {
        ll n;
        cout << "Enter number of nodes: ";
        cin >> n;
    
        ll pre[n];
        cout << "Enter preorder traversal: ";
        for (ll i = 0; i < n; i++)
            cin >> pre[i];
        for (ll i = 0; i < n; i++) {
            insert(pre[i]); 
        }
    
        cout << "Postorder traversal: ";
        postorder(root);
        cout << "\n";
 
        root = NULL; 
    }
    
    return 0;
}
