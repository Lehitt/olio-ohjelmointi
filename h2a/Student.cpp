#include <iostream>
#include"Student.h"
using namespace std;



int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudenNumber)
{
    studentNumber = newStudenNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}
