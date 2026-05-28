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

	clsDbLinkedList<int>::Node* N1 = MyDbLinkedList.Find(2);
	if (N1 != NULL)
	{
		cout << "\nNode With Value 2 is found :-) \n ";
	}
	else
	{ 
		cout << "\nNode With Value 2 is not found :-( \n ";
    }

	MyDbLinkedList.InsertAfter(N1, 500);
	cout << "\nafter inserting 500 after 2 :\n";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.InsertAtEnd(700);
	cout << "\nafter inserting 700 at end :\n";
	MyDbLinkedList.PrintList();

	clsDbLinkedList<int>::Node* N2 = MyDbLinkedList.Find(4);
	MyDbLinkedList.DeleteNode(N2);
	cout << "\nafter deleting 4 :\n";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.DeleteFirstNode();
	cout << "\nafter deleting first node :\n";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.DeleteLastNode();
	cout << "\nafter deleting Last node :\n";
	MyDbLinkedList.PrintList();
	return 0;

}
