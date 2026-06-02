#include <iostream>
#include"clsDynamicArray.h"
using namespace std;
int main()
{
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "Is Empty : " << MyDynamicArray.IsEmpty() << endl;
    cout << "\nArray Size : " << MyDynamicArray.Size() << endl;

    cout << "\nArray Items : \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAt(2,500);
    cout << "\nArray Items after insert 500 at index 2 : \n";
    cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

    return 0;

}

