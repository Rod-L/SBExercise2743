#pragma once

#include "Tasks.h"
#include "Employee.h"
#include "Worker.h"

class Manager: public Employee {
    int workersCount;
    Worker* subordinates;

public:
    explicit Manager(Worker* inSubordinates = nullptr, int inWorkersCount = 0);

    ~Manager();

    bool canTakeTask() const;

    void acceptTask(int taskId) const;

    void stopTask(int taskId) const;

    void describeTasks() const;

    void setSubordinates(Worker* workers, int count);
};