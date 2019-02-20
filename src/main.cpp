#include <iostream>
#include "Employee.h"
#include "Student.h"
#include "Person.h"

using namespace std;

int main()
{
    Person john("John Smith", 25.0);

    cout << "Name: " << john.getName() << endl;
    cout << "Age: " << john.getAge() << endl;


    Student peter("Peter Smith", 20, 1, 3.5, "Math");
    Person maryp("Mary Smith", 21);
    Student mary(maryp, 1, 3.5, "Math");

    Student paul(maryp, 1);

    Employee("Samantha Joe", 32, 120000.0, "Science");


    return 0;
}
