#pragma once

#include "Employee.h"

class Director: public Employee {
    int managersCount;
    Manager** managers = nullptr;
public:

    Director(Manager** inManagers, int inManagersCount);

    ~Director();

    bool haveFreeManagers() const;

    void startTask() const;

    void endTask() const;

    void describeCompany() const;
};