#include <iostream>
#include "ContractEmployee.h"
using namespace std;

void ContractEmployee::displayDetails() const {
    cout << "Contract Employee\n";
    cout << "ID: " << id << "\nName: " << name
         << "\nHourly Rate: " << hourlyRate
         << "\nHours Worked: " << hoursWorked
         << "\nTotal Pay: " << calculatePay() << endl;
}
