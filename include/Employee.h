#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

class Employee : public Person
{
public:
    double m_salary;
    std::string m_department;

    Employee(string name, int age, double salary = 0.0, string department = "");

    Employee(Person person, double salary = 0.0, string department = "");

    ~Employee();
};


#endif // EMPLOYEE_H
