#include "Employee.h"

std::string NAMES[] = {
        "John",
        "Alfred",
        "Egor",
        "Isaak",
        "Evgeniy",
        "Ivan",
        "Angela",
        "Teresa",
        "Naomi",
        "Elena",
        "Natalia"
};

std::string* employeeName() {
    auto name = new std::string(NAMES[rand() % 11]);
    return name;
}

int EMPLOYEE_ID = 0;
int employeeId() {
    ++EMPLOYEE_ID;
    return EMPLOYEE_ID;
}

Employee::~Employee() {
    delete name;
}
