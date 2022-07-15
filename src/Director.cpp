#include <iostream>
#include "Manager.h"
#include "Director.h"

Director::Director(Manager* inManagers, int inManagersCount): managers(inManagers), managersCount(inManagersCount) {};

Director::~Director() {
    delete[] managers;
}

bool Director::haveFreeManagers() const {
    for (int i = 0; i < managersCount; ++i) {
        if (managers[i].canTakeTask()) return true;
    }
    return false;
}

void Director::startTask() const {
    std::cout << "Enter task id to start:" << std::endl;
    int taskId;
    std::cin >> taskId;

    for (int i = 0; i < managersCount; ++i) {
        Manager& m = managers[i];
        if (m.canTakeTask()) m.acceptTask(taskId);
    }
}

void Director::endTask() const {
    std::cout << "Enter task id to stop:" << std::endl;
    int taskId;
    std::cin >> taskId;

    for (int i = 0; i < managersCount; ++i) managers[i].stopTask(taskId);
}

void Director::describeCompany() const {
    std::cout << name << " is director of the Company, " << managersCount
              << " managers follow his orders." << std::endl;
    for (int i = 0; i < managersCount; ++i) managers[i].describeTasks();
}