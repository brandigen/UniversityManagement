#include "Person.h"
using namespace std;

Person::Person(Person& person)
{
    this->m_name = person.m_name;
    this->m_age = person.m_age;
    std::cout << m_name + " Person copy constructor called\n";

}


Person::~Person()
{
     std::cout << m_name + " Person destructor called\n";
}
