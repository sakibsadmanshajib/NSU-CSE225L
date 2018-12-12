#include "StudentInfo.h"
#include "UnsortedType.cpp"
#include <iostream>

using namespace std;

void printFound(bool found)
{
    if(found)
        cout << "Item is found." << endl;
    else
        cout << "Item is not found." << endl;
}

int main()
{
    UnsortedType <int> l1;
    int tx[4];
    cout << "Input 4 numbers: ";
    for(int i=0; i<4; i++)
    {
        cin >> tx[i];
        l1.InsertItem(tx[i]);
    }

    l1.ResetList();
    int t;
    for(int i=0; i<l1.LengthIs(); i++)
    {
        l1.GetNextItem(t);
        cout << t << " ";
    }
    cout << endl;

    cout << l1.LengthIs() << endl;

    cout << "Enter a new number: ";
    int ty;
    cin >> ty;
    l1.InsertItem(ty);

    l1.ResetList();
    for(int i=0; i<l1.LengthIs(); i++)
    {
        l1.GetNextItem(t);
        cout << t << " ";
    }
    cout << endl;

    bool f;
    int te=4;
    l1.RetrieveItem(te, f);
    printFound(f);
    te=5;
    l1.RetrieveItem(te, f);
    printFound(f);
    te=9;
    l1.RetrieveItem(te, f);
    printFound(f);
    te=10;
    l1.RetrieveItem(te, f);
    printFound(f);
    l1.ResetList();
    if(l1.IsFull())
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;

    l1.DeleteItem(5);

    if(l1.IsFull())
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;

    l1.DeleteItem(1);

    l1.ResetList();
    for(int i=0; i<l1.LengthIs(); i++)
    {
        l1.GetNextItem(t);
        cout << t << " ";
    }
    cout << endl;

    l1.DeleteItem(6);

    l1.ResetList();
    for(int i=0; i<l1.LengthIs(); i++)
    {
        l1.GetNextItem(t);
        cout << t << " ";
    }
    cout << endl;

    cout << "Please enter the student details.\nID      Name    CGPA" << endl;
    StudentInfo s[5];
    for(int i=0; i<5; i++)
    {
        int id;
        string na;
        float cg;
        cin >> id >> na >> cg;
        s[i].setID(id);
        s[i].setName(na);
        s[i].setCGPA(cg);
    }

    UnsortedType <StudentInfo> ut;
    for(int i=0; i<5; i++)
    {
        ut.InsertItem(s[i]);
    }

    cout << endl;
    ut.ResetList();
    StudentInfo temp;
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(temp);
        temp.print();
    }
    cout << endl;
    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(temp);
        if(temp.getID() == 15467)
            ut.DeleteItem(temp);
    }

    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(temp);
        if(temp.getID() == 13569)
        {
            cout << "Item is found." << endl;
            temp.print();
        }
    }
    cout << endl;

    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(temp);
        temp.print();
    }
    return 0;
}
