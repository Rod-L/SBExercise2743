#pragma once

#include <string>

enum TaskType: uint8_t {
    none,
    A,
    B,
    C
};

std::string taskTypeName(TaskType val);

TaskType randomTaskType();