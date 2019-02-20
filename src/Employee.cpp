#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, int age, double salary, string department)
       :  Person(name, age), m_salary(salary), m_department(department)
{
        cout <<  m_name + " Employee constructor1 called\n";
}

Employee::Employee(Person person, double salary, string department )
       :  Person(person), m_salary(salary), m_department(department)
{
        cout <<  m_name + " Employee constructor2 called\n";
}


Employee::~Employee()
{
    std::cout <<  m_name + " Employee destructor called\n";
}
