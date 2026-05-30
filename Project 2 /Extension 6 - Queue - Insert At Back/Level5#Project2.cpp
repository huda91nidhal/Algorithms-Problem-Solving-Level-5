#include <iostream>
#include"clsMyQueue.h"
#include"clsDbLinkedList.h"
using namespace std;
int main()
{
    clsMyQueue <int> MyQueue;

    MyQueue.Push(10);
    MyQueue.Push(20);
    MyQueue.Push(30);
    MyQueue.Push(40);
    MyQueue.Push(50);

    cout << "Queue :\n";
    MyQueue.Print();

    cout << "\nQueue Size : " << MyQueue.Size() << endl;
    cout << "Queue Front : " << MyQueue.Front() << endl;
    cout << "Queue Back : " << MyQueue.Back() << endl;

    cout << "\nQueue after pop() :\n";
    MyQueue.Pop();

    MyQueue.Print();

    cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\nQueue after reverse :\n";
    MyQueue.Print();

    MyQueue.UpdateItem(2,600);
    cout << "\n\nQueue after Updating Item(2) to 600 :\n";
    MyQueue.Print();

    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after inserting 800 after Item(2) :\n";
    MyQueue.Print();

    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after inserting 1000 at front :\n";
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after inserting 1000 at back :\n";
    MyQueue.Print();

    return 0;
}
