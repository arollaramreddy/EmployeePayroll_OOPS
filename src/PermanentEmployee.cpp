#include <iostream>
#include "PermanentEmployee.h"
using namespace std;

void PermanentEmployee::displayDetails() const {
    cout << "Permanent Employee\n";
    cout << "ID: " << id << "\nName: " << name
         << "\nSalary: " << baseSalary
         << "\nBonus: " << bonus
         << "\nTotal Pay: " << calculatePay() << endl;
}
