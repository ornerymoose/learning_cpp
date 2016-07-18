#include <iostream>
using namespace std;

struct ListNode {
	double value;
	ListNode* next;
};

int main(){
	cout << "demonstration of linked lists" << endl;
	ListNode* head; //head is a pointer to ListNode, which is needed. 
	head = new ListNode; //allocate a new node
	head->value = 15;
	head->next = NULL; //signify end of the list

	ListNode* secondNode = new ListNode;
	secondNode->value = 25;
	secondNode->next = NULL; //signifies end of list
	head->next = secondNode; //second node is now the end of the list instead of head (see line 14)

	cout << "first node has a value of " << head->value << endl;
	cout << "second node has a value of " << head->next->value << endl;
	return 0;
}