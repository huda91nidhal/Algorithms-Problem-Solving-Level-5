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

	MyDbLinkedList.UpdateItem(2,500);

	cout << "After updating Item(2) :\n";
	MyDbLinkedList.PrintList();
	system("pause > 0");

}
