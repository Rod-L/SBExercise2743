#include <iostream>
#include "Manager.h"
#include "Worker.h"

Manager::Manager(Worker* inSubordinates, int inWorkersCount): subordinates(inSubordinates), workersCount(inWorkersCount) {};

Manager::~Manager() {
    delete[] subordinates;
}

bool Manager::canTakeTask() const {
    for (int i = 0; i < workersCount; ++i) {
        if (subordinates[i].taskType == none) return true;
    }
    return false;
}

void Manager::acceptTask(int taskId) const {
    std::srand(taskId + id);
    int count = rand() % workersCount + 1;
    for (int i = 0; i < workersCount && count > 0; ++i) {
        Worker& worker = subordinates[i];
        if (worker.taskType == none) {
            worker.taskId = taskId;
            worker.taskType = randomTaskType();
            worker.describeJob();
            --count;
        }
    }
}

void Manager::stopTask(int taskId) const {
    for (int i = 0; i < workersCount; ++i) {
        Worker& worker = subordinates[i];
        if (worker.taskId == taskId) {
            worker.taskId = 0;
            worker.taskType = none;
            worker.describeJob();
        }
    }
}

void Manager::describeTasks() const {
    std::cout << "Manager " << name << " lead " << workersCount << " employees:" << std::endl;
    for (int i = 0; i < workersCount; ++i) {
        subordinates[i].describeJob();
    }
}

void Manager::setSubordinates(Worker* workers, int count) {
    subordinates = workers;
    workersCount = count;
}