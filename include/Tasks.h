#pragma once

#include <string>

enum TaskType {
    none,
    A,
    B,
    C
};

std::string taskTypeName(TaskType val);

TaskType randomTaskType();