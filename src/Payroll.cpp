#include <iostream>
#include "Payroll.h"
using namespace std;

Payroll::~Payroll() {
    for (auto emp : employees)
        delete emp;
}

void Payroll::addEmployee(Employee* emp) {
    employees.push_back(emp);
}

bool Payroll::isDuplicateID(int id) {
    for (auto emp : employees)
        if (emp->getID() == id)
            return true;
    return false;
}

Employee* Payroll::searchByID(int id) {
    for (auto emp : employees)
        if (emp->getID() == id)
            return emp;
    return nullptr;
}

void Payroll::generateReport() {
    if (employees.empty()) {
        cout << "No employees added yet.\n";
        return;
    }
    for (auto emp : employees) {
        emp->displayDetails();
        cout << "-------------------------\n";
    }
}
