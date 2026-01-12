#pragma once
#include "Employee.h"

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(string n, int i, double rate, int hours)
        : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}

    void displayDetails() const override;
    double calculatePay() const override { return hourlyRate * hoursWorked; }
};
