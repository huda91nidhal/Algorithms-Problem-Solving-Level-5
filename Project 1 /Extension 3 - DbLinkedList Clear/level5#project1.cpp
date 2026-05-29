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

	cout << "\nNumbers of items in the linked list = " << MyDbLinkedList.Size() << endl;

	cout << "\nExecuting .Clear()\n";
	MyDbLinkedList.Clear();


	cout << "\nNumbers of items in the linked list = " << MyDbLinkedList.Size() << endl;
	
	system("pause > 0");

}
