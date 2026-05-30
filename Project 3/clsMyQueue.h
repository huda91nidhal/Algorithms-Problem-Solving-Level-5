#pragma once
#include<iostream>
#include"clsDbLinkedList.h"
using namespace std;
template <class T>
class clsMyQueue
{
protected :
    clsDbLinkedList <T> _MyList;
public:
	void Push(T Item)
	{
        _MyList.InsertAtEnd(Item);
    }

    void Pop()
    {
        _MyList.DeleteFirstNode();
    }

    bool IsEmpty()
    {
        return _MyList.IsEmpty();
    }

    void Print()
    {
        _MyList.PrintList();
    }

    int Size()
    {
        return _MyList.Size();
    }

    T Front()
    {
        return _MyList.GetItem(0);

    }

    T Back()
    {
        return _MyList.GetItem(Size() - 1);
    } 

    T GetItem(T Index)
    {
        return _MyList.GetItem(Index);
    }

    void Reverse()
    {
        return _MyList.Reverse();
    }

    void UpdateItem(int Index, T NewValue)
    {
        _MyList.UpdateItem(Index, NewValue);
    }

    void InsertAfter(int Index, T NewValue)
    {
        _MyList.InsertAfter(Index, NewValue);
    }

    void InsertAtFront(T NewValue)
    {
        _MyList.InsertAtBeginning(NewValue);
    }

    void InsertAtBack(T NewValue)
    {
        _MyList.InsertAtEnd(NewValue);
    }

    void Clear()
    {
        _MyList.Clear();
    }
};

