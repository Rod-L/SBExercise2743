#include <iostream>
#include "Worker.h"
#include "Manager.h"
#include "Director.h"

int main() {

    Director* director = nullptr;
    {
        std::cout << "Enter amount of managers in the Company:" << std::endl;
        int managersAmount;
        std::cin >> managersAmount;

        std::cout << "Enter amount of workers per each manager:" << std::endl;
        int workersAmount;
        std::cin >> workersAmount;

        auto managers = new Manager *[managersAmount];
        for (int i = 0; i < managersAmount; ++i) {
            auto workers = new Worker *[workersAmount];
            for (int j = 0; j < workersAmount; ++j) {
                auto worker = new Worker;
                worker->id = employeeId();
                worker->name = employeeName();
                workers[j] = worker;
            }
            auto manager = new Manager(workers, workersAmount);
            manager->id = employeeId();
            manager->name = employeeName();
            managers[i] = manager;
        }
        director = new Director(managers, managersAmount);
        director->name = employeeName();
    }

    std::cout << "Available commands:\n"
                 "startTask\n"
                 "endTask\n"
                 "status\n"
                 "exit\n\n";

    while (true) {
        std::cout << "Enter command:" << std::endl;
        std::string command;
        std::cin >> command;

        if (command == "exit") break;
        else if (command == "startTask") {
            director->startTask();
            if (!director->haveFreeManagers()) {
                std::cout << "Everyone are busy now." << std::endl;
                break;
            }
        }
        else if (command == "endTask") director->endTask();
        else if (command == "status") director->describeCompany();
        else std::cout << "Unknown command. Repeat input." << std::endl;
    }

    delete director;
}
