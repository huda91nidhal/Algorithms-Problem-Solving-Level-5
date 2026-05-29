#pragma once
#include<iostream>
using namespace std;
template <class T>
class clsDbLinkedList
{
protected:
    int _Size = 0;
public:
class Node
 {
  public:
  T Value;
  Node* Next;
  Node* Prev;
 };

Node* Head = NULL;

void InsertAtBeginning(T Value)
    {
        Node* NewNode = new Node();
        NewNode->Value = Value;
        NewNode->Next = Head;
        NewNode->Prev = NULL;
        if (Head != NULL)
        {
            Head->Prev = NewNode;
        }
        Head = NewNode;
        _Size++;
    }

void PrintList()
{
    Node* Current = Head;
    while (Current != NULL)
    {
        cout << Current->Value << " ";
        Current = Current->Next;
    }
    cout << "\n";
    delete Current;
}

Node* Find(T Value)
{
    Node* Current = Head;
    while (Current != NULL)
    {
        if (Current->Value == Value)
        {
            return Current;

        }
        Current = Current->Next;
    }
    return NULL;
}

void InsertAfter(Node*& Current, T Value)
{
    Node* NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = Current->Next;
    NewNode->Prev = Current;

    if (Current->Next != NULL)
    {
        Current->Next->Prev = NewNode;
    }
    Current->Next = NewNode;
    _Size++;
}

void InsertAtEnd(T Value)
{
    Node* NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = NULL;
    if (Head == NULL)
    {
        NewNode->Prev = NULL;
        Head = NewNode;
    }
    else
    {
        Node* Current = Head;
        while (Current->Next != NULL)
        {
            Current = Current->Next;
        }
        Current->Next = NewNode;
        NewNode->Prev = Current;
    }
    _Size++;
}

void DeleteNode(Node*& NodeToDelete )
{
    if (Head == NULL || NodeToDelete == NULL)
    {
        return;
    }
    if (Head == NodeToDelete)
    {
        Head = NodeToDelete->Next;
    }
    if (NodeToDelete->Next != NULL)
    {
        NodeToDelete->Next->Prev = NodeToDelete->Prev;
    }
    if (NodeToDelete->Prev != NULL)
    {
        NodeToDelete->Prev->Next = NodeToDelete->Next;
    }
    delete NodeToDelete;
    _Size--;

}

void DeleteFirstNode()
{
    if (Head == NULL)
    {
        return;
    }
    Node* Temp = Head;
    Head = Head->Next;
    if (Head != NULL)
    {
        Head->Prev = NULL;
    }
    delete Temp;
    _Size--;
}

void DeleteLastNode()
{
    if (Head == NULL)
    {
        return;
    }
    if (Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
        return;
    }
    Node* Current = Head;
    // it mean before last node
    while (Current->Next->Next != NULL)
    {
        Current = Current->Next;
    }
    Node* Temp = Current->Next;
    Current->Next = NULL;
    delete Temp;
    _Size--;
}

int Size()
{
    return _Size;
}

bool IsEmpty()
{
    return (_Size == 0 ? true : false);
}


void Clear()
{
    while (_Size > 0)
    {
        DeleteFirstNode();
    }
}

};