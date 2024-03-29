#include <bits/stdc++.h>
using namespace std;

struct Interval
{
	int low, high;
};

struct ITNode
{
	Interval *i;
	int max;
	ITNode *left, *right;
};

ITNode * newNode(Interval i)
{
	ITNode *temp = new ITNode;
	temp->i = new Interval(i);
	temp->max = i.high;
	temp->left = temp->right = NULL;
};

ITNode *insert(ITNode *root, Interval i)
{
	if (root == NULL)
		return newNode(i);

	int l = root->i->low;

	if (i.low < l)
		root->left = insert(root->left, i);

	else
		root->right = insert(root->right, i);

	if (root->max < i.high)
		root->max = i.high;

	return root;
}

bool doOVerlap(Interval i1, Interval i2)
{
	if (i1.low < i2.high && i2.low < i1.high)
		return true;
	return false;
}

Interval *overlapSearch(ITNode *root, Interval i)
{
	if (root == NULL) return NULL;

	if (doOVerlap(*(root->i), i))
		return root->i;

	if (root->left != NULL && root->left->max >= i.low)
		return overlapSearch(root->left, i);

	return overlapSearch(root->right, i);
}

void printConflicting(Interval appt[], int n)
{
	ITNode *root = NULL;
	root = insert(root, appt[0]);

	for (int i=1; i<n; i++)
	{
		Interval *res = overlapSearch(root, appt[i]);
		if (res != NULL)
			cout << "[" << appt[i].low << "," << appt[i].high
				<< "] Conflicts with [" << res->low << ","
				<< res->high << "]\n";

		root = insert(root, appt[i]);
	}
}


int main()
{
	Interval appt[] = { {1, 5}, {3, 7}, {2, 6}, {10, 15},
						{5, 6}, {4, 100}};
	int n = sizeof(appt)/sizeof(appt[0]);
	cout << "Following are conflicting intervals\n";
	printConflicting(appt, n);
	return 0;
}
