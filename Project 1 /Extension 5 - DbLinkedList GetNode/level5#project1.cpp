#include <iostream>
#include "clsDbLinkedList.h"
using namespace std;
int main()
{
	clsDbLinkedList <int> MyDbLinkedList;

	MyDbLinkedList.InsertAtBeginning(5);
	MyDbLinkedList.InsertAtBeginning(4);
	MyDbLinkedList.InsertAtBeginning(3);
	MyDbLinkedList.InsertAtBeginning(2);
	MyDbLinkedList.InsertAtBeginning(1);

	cout << "Linked List Content :\n";
	MyDbLinkedList.PrintList();

	clsDbLinkedList <int> ::Node* N;
	N = MyDbLinkedList.GetNode(2);
	cout << "\nNode value is : " << N->Value << endl;
	
	
	system("pause > 0");

}
