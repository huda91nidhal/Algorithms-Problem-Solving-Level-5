#include <iostream>
#include "clsDbLinkedList.h"
using namespace std;
int main()
{
	clsDbLinkedList <int> MyDbLinkedList;

	if (MyDbLinkedList.IsEmpty())
	{
		cout << "\n\nyes , List is empty\n\n";
	}
	else
	{ 
		cout << "\n\nno ,  List is not empty\n\n";
    }

	MyDbLinkedList.InsertAtBeginning(5);
	MyDbLinkedList.InsertAtBeginning(4);
	MyDbLinkedList.InsertAtBeginning(3);
	MyDbLinkedList.InsertAtBeginning(2);
	MyDbLinkedList.InsertAtBeginning(1);

	cout << "Linked List Content :\n";
	MyDbLinkedList.PrintList();

	cout << "\nNumbers of items in the linked list = " << MyDbLinkedList.Size() << endl;

	if (MyDbLinkedList.IsEmpty())
	{
		cout << "\n\nyes , List is empty\n\n";
	}
	else
	{
		cout << "\n\nno , List is not empty\n\n";
	}
	
	
	
	system("pause > 0");

}
