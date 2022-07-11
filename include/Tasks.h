#pragma once

#include <string>

enum taskType {
    none,
    A,
    B,
    C
};

std::string taskTypeName(taskType val);

taskType randomTaskType();