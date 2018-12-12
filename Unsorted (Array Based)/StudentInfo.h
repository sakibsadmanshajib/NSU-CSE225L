#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <iostream>

using namespace std;

class StudentInfo
{
    public:
        StudentInfo();
        StudentInfo(int, string, float);
        bool operator!=(StudentInfo);
        void print();
        void setID(int);
        void setName(string);
        void setCGPA(float);
        int getID();
        bool operator==(StudentInfo);

    private:
        int ID;
        string Name;
        float CGPA;
};

#endif // STUDENTINFO_H
