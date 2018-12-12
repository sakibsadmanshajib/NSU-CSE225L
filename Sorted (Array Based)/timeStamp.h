#ifndef TIMESTAMP_H
#define TIMESTAMP_H
#include <iostream>
#include <string>

using namespace std;

class timeStamp
{
    public:
        timeStamp();
        timeStamp(int, int, int);
        void printTS();
        bool operator==(timeStamp);
        bool operator!=(timeStamp);
        bool operator>=(timeStamp);
        bool operator>(timeStamp);
        bool operator<(timeStamp);

    private:
        int seconds;
        int minutes;
        int hours;
};

#endif // TIMESTAMP_H
