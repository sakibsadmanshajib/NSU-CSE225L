#include "StudentInfo.h"

StudentInfo::StudentInfo()
{
    ID = 0;
    Name = "";
    CGPA = 0;
}

StudentInfo::StudentInfo(int id, string name, float cgpa)
{
    ID = id;
    Name = name;
    CGPA = cgpa;
}

bool StudentInfo::operator!=(StudentInfo std1)
{
    if(ID!=std1.ID || Name!=std1.Name || CGPA!=std1.CGPA)
    {
        return true;
    }
    else
        return false;
}

void StudentInfo::print()
{
    cout << ID << ", " << Name << ", " << CGPA << endl;
}

void StudentInfo::setID(int id)
{
    ID = id;
}

void StudentInfo::setName(string name)
{
    Name = name;
}

void StudentInfo::setCGPA(float cgpa)
{
    CGPA = cgpa;
}

int StudentInfo::getID()
{
    return ID;
}

bool StudentInfo::operator==(StudentInfo std1)
{
    if(ID==std1.ID && Name==std1.Name && CGPA==std1.CGPA)
    {
        return true;
    }
    else
        return false;
}
