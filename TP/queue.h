#pragma once
#include <iostream>

class Node
{
public:
    int data;
    Node* pNext;

public:
    Node(int value, Node* pNext = nullptr)
    {
        this->data = value;
        this->pNext = pNext;
    }

};

class Parent
{
    
public:
    Parent();
    ~Parent();
    
 
    

public:
    void Push_Back(int value);
    int& operator[](const int index);
    void Pop_Front();
    int  SumLessHarm(Parent& obj);
    int  GetSize() 
    {
        return size;
    }
    void Copying(Parent& obj);
    void Merger(Parent& obj, const Parent& obj2);

private:
    Node* head;
protected:
    int size;
};