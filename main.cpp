#include "node.cpp"
#include "print.cpp"
#include "create.cpp"
#include <iostream>
using namespace std;

int main() {
	Node *head = create();
	printLL(head);
	return 0;
}