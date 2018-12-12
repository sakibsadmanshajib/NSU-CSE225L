#include "dynarr.cpp"
#include <stdlib.h>

int main()
{
    dynArr<int> d1(5);
    dynArr<double> d2(5);

    for(int i=0; i<5; i++)
    {
        d1.setValue(i, (rand() % 10 + 1));
        d2.setValue(i, (rand() / 580.9));
    }

    cout << "d1: ";

    for(int i=0; i<5; i++)
    {
        cout << d1.getValue(i) << " ";
    }

    cout << "\nd2: ";

    for(int i=0; i<5; i++)
    {
        cout << d2.getValue(i) << " ";
    }

    return 0;
}
