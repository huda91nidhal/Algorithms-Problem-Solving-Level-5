#pragma once
#include<iostream>
using namespace std;
template <class T>
class clsDbLinkedList
{
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
}

};