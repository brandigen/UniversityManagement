#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
    string m_name;
    int m_age;

    Person(string name = "", int age = 0)
        : m_name(name), m_age(age)
    {
        cout << m_name + " Person constructor called\n";
    }

    Person(Person& person); // copy ctor

    string getName() const { return m_name; }
    int getAge() const { return m_age; }
    ~Person();

};

#endif // PERSON_H
