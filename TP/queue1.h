#pragma once
#include "queue.h"

class Child_private : private Parent
{
public:
    void Push_Back(int value);
    int& operator[](const int index);
    void Pop_Front();
    int  SumLessHarm(Child_private& obj);
    int  GetSize() { return size; }
    void Copying(Child_private& obj);
    void Merger(Child_private& obj, Child_private& obj2);
};


class Child_protected : protected Parent
{
public:
    void Push_Back(int value);
    int& operator[](const int index);
    void Pop_Front();
    int  SumLessHarm(Child_protected& obj);
    int  GetSize() { return size; }
    void Copying(Child_protected& obj);
    void Merger(Child_protected& obj, Child_protected& obj2);
};

class Child_public : public Parent
{
};