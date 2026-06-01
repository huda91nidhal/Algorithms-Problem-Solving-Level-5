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

    MyDynamicArray.DeleteFirstItem();
    cout << "\nArray Items after delete first item : \n";
    cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

    return 0;

}

