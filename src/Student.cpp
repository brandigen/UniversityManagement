#include "Student.h"

using namespace std;

Student::Student(string name, int age, int year, double gpa, string major)
       : Person(name, age), m_year(year), m_gpa(gpa), m_major(major)
{
        cout <<  m_name + " Student constructor1 called\n";
}

Student::Student(Person person, int year , double gpa, string major)
       : Person(person), m_year(year), m_gpa(gpa), m_major(major)
{
        cout <<  m_name + " Student constructor2 called\n";
}


Student::~Student()
{
     std::cout <<  m_name + " Student destructor called\n";
}
