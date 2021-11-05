#include "node.cpp"
using namespace std;

Node *create()
{
	int n;
	cin >> n;
	Node *head = NULL, *tail = NULL;
	for (int i = 0; i < n; ++i)
	{
		int ele;
		cin >> ele;
		Node* newNode = new Node(ele);
		if (!head)
		{
			head = newNode;
			tail = head;
		}
		else
		{
			tail->next = newNode;
			tail = tail->next;
		}
	}
	return head;
}