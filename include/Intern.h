#pragma once
#include "Employee.h"

class Intern : public Employee {
private:
    double stipend;

public:
    Intern(string n, int i, double s)
        : Employee(n, i), stipend(s) {}

    void displayDetails() const override;
    double calculatePay() const override { return stipend; }
};
