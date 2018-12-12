#include "QueType.cpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    QueType <int> ql(5);

    if (ql.IsEmpty())
        cout << "Queue is Empty." << endl;
    else
        cout << "Queue is not Empty." << endl;

    cout << "Enter four items: ";
    int temp;
    for (int i=0; i < 4; i++)
    {
        cin >> temp;
        ql.Enqueue(temp);
    }

    if (ql.IsEmpty())
        cout << "Queue is Empty." << endl;
    else
        cout << "Queue is not Empty." << endl;

    if (ql.IsFull())
        cout << "Queue is Full." << endl;
    else
        cout << "Queue is not Full." << endl;

    cout << "Enter another item: ";
    cin >> temp;
    ql.Enqueue(temp);

    QueType <int> qtemp(5);

    while (!ql.IsEmpty())
    {
        ql.Dequeue(temp);
        qtemp.Enqueue(temp);
    }

    cout << "The items are: ";

    while (!qtemp.IsEmpty())
    {
        qtemp.Dequeue(temp);
        cout << temp << " ";
        ql.Enqueue(temp);
    }

    cout << endl;

    if (ql.IsFull())
        cout << "Queue is Full." << endl;
    else
        cout << "Queue is not Full." << endl;

    try {
        cout << "Enter another item: ";
        cin >> temp;
        ql.Enqueue(temp);
    } catch (FullQueue e) {
        cerr << "Queue Overflow" << endl;
    }

    ql.Dequeue(temp);
    ql.Dequeue(temp);

    while (!ql.IsEmpty())
    {
        ql.Dequeue(temp);
        qtemp.Enqueue(temp);
    }

    cout << "The items are: ";

    while (!qtemp.IsEmpty())
    {
        qtemp.Dequeue(temp);
        cout << temp << " ";
        ql.Enqueue(temp);
    }

    ql.Dequeue(temp);
    ql.Dequeue(temp);
    ql.Dequeue(temp);

    cout << endl;

    if (ql.IsEmpty())
        cout << "Queue is Empty." << endl;
    else
        cout << "Queue is not Empty." << endl;

    try {
        ql.Dequeue(temp);
    } catch (EmptyQueue e) {
        cerr << "Queue Underflow" << endl;
    }

    cout << "===============================================" << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    QueType <string> bin;
    bin.Enqueue("1");

    string temp1, temp2, temp3;
    for (int i=0; i<n; i++)
    {
        bin.Dequeue(temp3);
        cout << temp3 << endl;
        temp1 = temp3 + "0";
        bin.Enqueue(temp1);
        temp2 = temp3 + "1";
        bin.Enqueue(temp2);
    }

}
