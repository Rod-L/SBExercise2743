#pragma once

#include "Tasks.h"
#include "Employee.h"
#include "Worker.h"

class Manager: public Employee {
    int workersCount;
    Worker** subordinates = nullptr;

public:
    Manager(Worker** inSubordinates, int inWorkersCount);

    ~Manager();

    bool canTakeTask() const;

    void acceptTask(int taskId) const;

    void stopTask(int taskId) const;

    void describeTasks() const;
};