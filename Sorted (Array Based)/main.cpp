#include <iostream>
#include "SortedType.cpp"
#include "timeStamp.h"

using namespace std;

int main()
{
    SortedType <int> sl;

    cout << sl.LengthIs() << endl;

    cout << "Insert five numbers: ";
    int t[5];

    for(int i=0; i<5; i++)
    {
        cin >> t[i];
        sl.InsertItem(t[i]);
    }

    sl.ResetList();
    int temp;
    for(int i=0; i<sl.LengthIs(); i++)
    {
        sl.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    sl.ResetList();
    bool f;
    temp = 6;
    sl.RetrieveItem(temp, f);
    if(f)
        cout << "The item is found." << endl;
    else
        cout << "The item is not found." <<  endl;
    temp = 5;
    sl.RetrieveItem(temp, f);
    if(f)
        cout << "The item is found." << endl;
    else
        cout << "The item is not found." <<  endl;

    if(sl.IsFull())
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;

    sl.DeleteItem(1);
    sl.ResetList();
    for(int i=0; i<sl.LengthIs(); i++)
    {
        sl.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    if(sl.IsFull())
        cout << "The list is full." << endl;
    else
        cout << "The list is not full." << endl;

    SortedType <timeStamp> tl;
    int ts, tm, th;
    cout << "Enter five timeStamps: " << endl;
    for(int i=0; i<5; i++)
    {
        cin >> ts >> tm >> th;
        tl.InsertItem(timeStamp(ts, tm, th));
    }

    tl.ResetList();
    timeStamp delST(25, 36, 17);
    tl.DeleteItem(delST);

    tl.ResetList();
    timeStamp tempST;
    for(int i=0; i<tl.LengthIs(); i++)
    {
        tl.GetNextItem(tempST);
        tempST.printTS();
        cout << endl;
    }
    return 0;
}
