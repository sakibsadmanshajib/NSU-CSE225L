#include "timeStamp.h"

timeStamp::timeStamp()
{
    seconds = 0;
    minutes = 0;
    hours = 0;
}

timeStamp::timeStamp(int secs, int mins, int hrs)
{
    seconds = secs;
    minutes = mins;
    hours = hrs;
}

void timeStamp::printTS()
{
    cout << seconds << ":" << minutes << ":" << hours;
}

bool timeStamp::operator>=(timeStamp t)
{
    if(hours >= t.hours)
    {
        if(minutes >= t.minutes)
        {
            if(seconds >= t.seconds)
                return true;
        }
        else
            return false;
    }
    else
        return false;
}

bool timeStamp::operator>(timeStamp t)
{
    if(hours >= t.hours)
    {
        if(minutes >= t.minutes)
        {
            if(seconds > t.seconds)
                return true;
        }
        else
            return false;
    }
    else
        return false;
}

bool timeStamp::operator==(timeStamp t)
{
    if(hours == t.hours && minutes == t.minutes && seconds == t.seconds)
        return true;
    else
        return false;
}

bool timeStamp::operator!=(timeStamp t)
{
    if(hours == t.hours && minutes == t.minutes && seconds == t.seconds)
        return false;
    else
        return true;
}

bool timeStamp::operator<(timeStamp t)
{
    if(hours < t.hours)
        return true;
    else if(hours < t.hours && minutes < t.minutes)
        return true;
    else if(hours < t.hours && minutes < t.minutes && seconds < t.seconds)
        return true;
    else
        return false;
}
