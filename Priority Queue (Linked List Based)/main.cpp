#include <iostream>
#include "PQType.cpp"
#include "HeapType.h"
using namespace std;

int main()
{
    PQType<int> pq(15);

    if(pq.IsEmpty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    int temp;

    for(int i=0; i<10; i++)
    {
        cin >> temp;
        pq.Enqueue(temp);
    }

    if(pq.IsEmpty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    pq.Dequeue(temp);
    cout << temp << endl;

    pq.Dequeue(temp);
    cout << temp << endl;

    PQType <int> candy(15);
    int NumberOfBag,min, SumOfCandies =0;

    cin >> NumberOfBag;
    cin >> min;

    for(int i=0;i<NumberOfBag; i++)
    {
        cin >> temp;
        candy.Enqueue(temp);
    }

    for(int i=0;i<min;i++)
    {
        candy.Dequeue(temp);
        SumOfCandies = SumOfCandies+ temp;
        temp = temp / 2;
        candy.Enqueue(temp);
    }

    cout << SumOfCandies << endl;

    return 0;
}
