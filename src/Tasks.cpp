#include "Tasks.h"
#include <string>

std::string taskTypeName(TaskType val) {
    switch (val) {
        case A: return "A";
        case B: return "B";
        case C: return "C";
        default: return "none";
    }
}

TaskType randomTaskType() {
    switch(rand() % 3) {
        case 0: return A;
        case 1: return B;
        case 2: return C;
        default: return none;
    }
}