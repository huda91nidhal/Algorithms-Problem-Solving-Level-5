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

    return 0;
}
