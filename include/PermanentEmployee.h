#pragma once
#include "Employee.h"

class PermanentEmployee : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    PermanentEmployee(string n, int i, double sal, double b)
        : Employee(n, i), baseSalary(sal), bonus(b) {}

    void displayDetails() const override;
    double calculatePay() const override { return baseSalary + bonus; }
};
