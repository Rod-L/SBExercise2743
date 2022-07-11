#include <iostream>
#include "Worker.h"

void Worker::describeJob() const {
    if (taskType != none) {
        std::cout << *name << " working on task #" << taskId << ", his job type is "
                  << taskTypeName(taskType) << std::endl;
    } else {
        std::cout << *name << " has no job." << std::endl;
    }
}