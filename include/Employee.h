#pragma once
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}
    virtual ~Employee() {}

    int getID() const { return id; }

    virtual void displayDetails() const = 0; // pure virtual
    virtual double calculatePay() const = 0; // pure virtual
};
