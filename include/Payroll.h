#pragma once
#include <vector>
#include "Employee.h"

class Payroll {
private:
    std::vector<Employee*> employees;

public:
    ~Payroll(); // cleanup allocated memory
    void addEmployee(Employee* emp);
    bool isDuplicateID(int id);
    Employee* searchByID(int id);
    void generateReport();
};
