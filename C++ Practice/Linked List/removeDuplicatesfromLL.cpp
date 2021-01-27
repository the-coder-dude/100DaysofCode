#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

struct Node *newNode(int data)
{
Node *temp = new Node;
temp->data = data;
temp->next = NULL;
return temp;
}

void removeDuplicates(struct Node *start)
{
	struct Node *ptr1, *ptr2, *dup;
	ptr1 = start;


	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;

		while (ptr2->next != NULL)
		{
			if (ptr1->data == ptr2->next->data)
			{
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}


int main()
{
	struct Node *start = newNode(7);
	start->next = newNode(8);
	start->next->next = newNode(9);
	start->next->next->next = newNode(9);
	start->next->next->next->next = newNode(8);
	start->next->next->next->next->next =
									newNode(9);
	start->next->next->next->next->next->next =
									newNode(7);

	printf("Linked list before");
	printList(start);

	removeDuplicates(start);

	printf("\nLinked list after");
	printList(start);

	return 0;
}


