#include "Employee.h"

const std::string NAMES[] = {
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

int Employee::EmployeeId = 0;

Employee::Employee() {
    ++Employee::EmployeeId;
    name = NAMES[rand() % 11];
    id = Employee::EmployeeId;
}
