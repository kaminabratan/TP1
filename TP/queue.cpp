#include "queue.h"
#include <iostream>
using namespace std;

Parent::Parent()
{
    head = nullptr;
    size = 0;
}

Parent::~Parent()
{
    while (size != 0)
    {
        Node* temp = head;
        head = temp->pNext;
        delete temp;
        size--;
    }
}

void Parent::Push_Back(int value)
{
    if (head == nullptr)
    {
        head = new Node(value);
    }
    else
    {
        Node* current = this->head;

        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node(value);
    }
    size++;
}


int& Parent::operator[](const int index)
{
    int counter = 0;
    Node* current = this->head;

    while (current->pNext != nullptr)
    {
        if (counter == index) return current->data;

        current = current->pNext;
        counter++;
    }
}


void Parent::Pop_Front()
{
    Node* temp = head;
    head = head->pNext;
    delete temp;

    size--;



}

int Parent::SumLessHarm(Parent& obj)
{
    Node* current = this->head;
    float sum = 0;
    float harm;
    int count = 0;
    int temp;
    float tempSum = 0;

    while (current != nullptr)
    {
        temp = current->data;
        tempSum += (1 / temp);
        current = current->pNext;
        count++;
    }
    current = this->head;
    harm = count / tempSum;

    while (current != nullptr)
    {
        if (current->data < harm)
        {
            sum += current->data;
        }
        current = current->pNext;
    }
    return sum;
}

void Parent::Copying(Parent& obj)
{
    int temp[100];
    Node* current = obj.head;
    for (int i = 0; i < obj.size; i++)
    {
        temp[i] = current->data;
        current = current->pNext;
    }

    for (int i = 0; i < obj.size; i++)
    {
        Push_Back(temp[i]);
    }

}

void Parent::Merger(Parent& obj, const Parent& obj2)
{
    int temp[100], temp2[100];

    Node* current = obj.head;
    for (int i = 0; i < obj.size; i++)
    {
        temp[i] = current->data;
        current = current->pNext;
    }
    int lenght = obj2.size + obj.size;
    Node* current2 = obj2.head;
    for (int i = obj.size; i < lenght; i++)
    {
        temp[i] = current2->data;
        current2 = current2->pNext;
    }

    for (int i = 0; i < lenght; i++)
    {
        Push_Back(temp[i]);
    }


}