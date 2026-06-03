#include <iostream>
#include"clsMyQueueArr.h"
using namespace std;
int main()
{
    clsMyQueueArr <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "Queue :\n";
    MyQueue.Print();

    cout << "\nQueue Size : " << MyQueue.Size() << endl;
    cout << "Queue Front  : " << MyQueue.front() << endl;
    cout << "Queue Back   : " << MyQueue.back() << endl;

   cout << "\nQueue after pop() :\n";
    MyQueue.pop();

    MyQueue.Print();

    cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\nQueue after reverse :\n";
    MyQueue.Print();

     MyQueue.UpdateItem(2, 600);
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

    MyQueue.Clear();
    cout << "\n\nQueue after Clear() :\n";
    MyQueue.Print();

    return 0;
}

