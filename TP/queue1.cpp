#include "queue1.h"
#include <iostream>
using namespace std;

void Child_protected::Push_Back(int value)
{
	return Parent::Push_Back(value);
}
int& Child_protected::operator[](const int index) 
{
	return Parent::operator[](index);
}
void Child_protected::Pop_Front() 
{ 
	return Parent::Pop_Front(); 
}
int  Child_protected::SumLessHarm(Child_protected& obj) 
{ 
	return Parent::SumLessHarm(obj);
}
void Child_protected::Copying(Child_protected& obj) 
{
	return Parent::Copying(obj);
}
void Child_protected::Merger(Child_protected& obj, Child_protected& obj2) 
{ 
	return Parent::Merger(obj, obj2);
}



void Child_private::Push_Back(int value) 
{
	return Parent::Push_Back(value);
}
int& Child_private::operator[](const int index) 
{
	return Parent::operator[](index);
}
void Child_private::Pop_Front() 
{ 
	return Parent::Pop_Front();
}
int  Child_private::SumLessHarm(Child_private& obj) 
{ 
	return Parent::SumLessHarm(obj);
}
void Child_private::Copying(Child_private& obj) 
{ 
	return Parent::Copying(obj);
}
void Child_private::Merger(Child_private& obj, Child_private& obj2) 
{ 
	return Parent::Merger(obj, obj2);
}