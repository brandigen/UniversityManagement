#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <iostream>
using namespace std;

class Student : public Person
{
public:
    int m_year;
    double m_gpa;
    string m_major;

    Student(string name, int age, int year = 0, double gpa = 0.0, string major = "undecided");
//       : Person(name, age), m_year(year), m_gpa(gpa), m_major(major);
 //   {
//        cout << "Student constructor1 called\n";
 //   }

    Student(Person person, int year = 0, double gpa = 0.0, string major = "undecided");
//       : Person(person), m_year(year), m_gpa(gpa), m_major(major);
//    {
//        cout << "Student constructor2 called\n";
//    }

    ~Student();
};

#endif // STUDENT_H
