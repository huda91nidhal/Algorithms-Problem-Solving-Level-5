#include <iostream>
#include"clsMyStack.h"
#include"clsDbLinkedList.h"
using namespace std;
int main()
{
    clsMyStack <int> MyStack;

    MyStack.Push(10);
    MyStack.Push(20);
    MyStack.Push(30);
    MyStack.Push(40);
    MyStack.Push(50);

    cout << "Stack :\n";
    MyStack.Print();

    cout << "\Stack Size : " << MyStack.Size() << endl;
    cout << "Stack Top : " << MyStack.Top() << endl;
    cout << "Stack Bottom : " << MyStack.Bottom() << endl;

    cout << "\Stack after pop() :\n";
    MyStack.Pop();

    MyStack.Print();

    cout << "\n\nItem(2) : " << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\Stack after reverse :\n";
    MyStack.Print();

    MyStack.UpdateItem(2, 600);
    cout << "\n\Stack after Updating Item(2) to 600 :\n";
    MyStack.Print();

    MyStack.InsertAfter(2, 800);
    cout << "\n\Stack after inserting 800 after Item(2) :\n";
    MyStack.Print();

    MyStack.InsertAtFront(1000);
    cout << "\n\Stack after inserting 1000 at Top :\n";
    MyStack.Print();

    MyStack.InsertAtBack(2000);
    cout << "\n\Stack after inserting 1000 at Bottom :\n";
    MyStack.Print();

    MyStack.Clear();
    cout << "\n\Stack after Clear() :\n";
    MyStack.Print();

    return 0;
}
