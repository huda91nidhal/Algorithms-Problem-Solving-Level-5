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

    int Index = MyDynamicArray.Find(50); 

    if (Index == -1)
        cout << "\nItem was not found :-(\n";
    else
        cout << "\n30 is found at Index " << Index << endl;
    
    
    /*MyDynamicArray.DeleteLastItem();
    cout << "\nArray Items after delete Last item : \n";
    cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();*/


    return 0;

}

