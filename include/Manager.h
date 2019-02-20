#ifndef MANAGER_H
#define MANAGER_H

#include<string>
using namespace std;

#include "Employee.h"

class Manager : public Employee {
public:
  Manager(string theName,
          float thePayRate,
          bool isSalaried);

  bool getSalaried() const;

  float pay(float hoursWorked) const;

protected:
  bool salaried;
};
#endif // MANAGER_H
