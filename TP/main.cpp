#include "queue.h"
#include "queue1.h"
#include <iostream>
#include <string>;
using namespace std;

template <class T>
void Merger(T* Que)
{
    int number1, number2, number3;
    cout << "Choose queues that will be merged" << endl;
    cin >> number1; cin >> number2; cout << endl;
    cout << "Choose where they will be merged" << endl;
    cin >> number3;
    Que[number3].Merger(Que[number1], Que[number2]);
}

template <class T>
void CopyingQueue(T* Que, T& obj)
{
    int number;
    cout << "Choose where to copy" << endl;
    cin >> number;
    Que[number].Copying(obj);

}


int EnterQueue()
{
    cout << "Enter number of the queue" << endl;
    int choice = 0;
    cin >> choice;
    return choice;
}

template <class T>
void SumLessHarmonic(T& obj, const int number)
{
    cout << "Sum el" << " #" + to_string(number) << endl;
    cout << obj.SumLessHarm(obj) << endl;


}

template <class T>
void DeleteItem(T& obj)
{
    obj.Pop_Front();
}

template <class T>
void ShowQueue(T& obj, const int number)
{
    cout << "Current queue" << "#" + to_string(number) << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < obj.GetSize(); i++)
    {
        cout << obj[i] << "  ";
    }
    cout << endl;
    cout << "-------------------------" << endl;

}


template <class T>
void AddingItem(T& obj, const int number)
{
    cout << "Add element to the current queue" << " #" + to_string(number) << endl;
    int value;
    cout << "Enter value: ";
    cin >> value;
    obj.Push_Back(value);

}

void Error()
{
    cout << "Choose existable menu item" << endl;
}



template <class T>
void MainMenu(T* QueParent)
{
    int choice = 0;
    int c;
    int work = 1;
    while (work)
    {
        cout << "Main menu" << endl;
        cout << "1. Adding element to the queue" << endl;
        cout << "2. Deleting element from the queue" << endl;
        cout << "3. Displaying the queue on the screen" << endl;
        cout << "4. Sum el (Change)Summ" << endl;
        cout << "5. Choosing the current queue" << endl;
        cout << "6. Creating the copy of the queue" << endl;
        cout << "7. Merging of two queues" << endl;
        cout << "8. Choosing the child class" << endl;
        cout << "9. Quit" << endl;
        cout << endl;
        cin >> c;
        system("cls");

        switch (c)
        {
        case 1:  AddingItem(QueParent[choice], choice);
            break;

        case 2: DeleteItem(QueParent[choice]);
            break;

        case 3:ShowQueue(QueParent[choice], choice);
            break;

        case 4: SumLessHarmonic(QueParent[choice], choice);
            break;

        case 5: choice = EnterQueue();
            break;

        case 6: CopyingQueue(QueParent, QueParent[choice]);
            break;

        case 7: Merger(QueParent);
            break;

        case 8:
            work = 0;
            break;

        case 9: exit(0);
            break;

        default: Error();
            break;
        }
    }
}

int main()
{
    Child_private* Queue_private = NULL;
    Child_protected* Queue_protected = NULL;
    Child_public* Queue_public = NULL;
    int work = 1;
    while (work) {
        cout << "Choose type of the child class" << endl;
        cout << "1 - Private" << endl;
        cout << "2 - Protected" << endl;
        cout << "3 - Public" << endl;
        int select = 0;
        cin >> select;
        system("cls");
        cout << "Setup number of queues" << endl;
        int num = 1;
        cin >> num;

        system("cls");

        switch (select)
        {
        case 1:
            Queue_private = new Child_private[num];
            MainMenu(Queue_private);
            delete[] Queue_private;
            break;
        case 2:
            Queue_protected = new Child_protected[num];
            MainMenu(Queue_protected);
            delete[] Queue_protected;
            break;
        case 3:
            Queue_public = new Child_public[num];
            MainMenu(Queue_public);
            delete[] Queue_public;
            break;

        default:cout << "error";
            break;
        }
    }
    return 0;
}