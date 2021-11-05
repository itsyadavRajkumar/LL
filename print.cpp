#include"node.cpp"
using namespace std;

void pritnLL(Node *head)
{
	cout << head -> data << ' ';
	head = head -> next;
}