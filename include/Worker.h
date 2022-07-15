#pragma once

#include "Tasks.h"
#include "Employee.h"

class Worker: public Employee {
public:
    int taskId = 0;
    TaskType taskType = none;

    void describeJob() const;
};