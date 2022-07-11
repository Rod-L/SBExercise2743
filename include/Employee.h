#pragma once

#include <string>

std::string* employeeName();

int employeeId();

class Employee{
public:
    int id = 0;
    std::string* name = nullptr;

    ~Employee();
};