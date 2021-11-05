/*
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this -> data = data;
		next = NULL;
	}
};
*/

void printLL(Node *head)
{
	while (head)
	{
		cout << head -> data << ' ';
		head = head -> next;
	}
}