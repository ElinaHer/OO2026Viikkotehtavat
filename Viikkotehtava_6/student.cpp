#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string s,int n)
{
    Name = s;
    Age = n;
}

void Student::setAge(int n)
{
    Age = n;
}

void Student::setName(string s)
{
    Name = s;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout<< "student = " << Name << " Age = " << Age << endl;
}
