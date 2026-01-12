#include <iostream>
#include "Intern.h"
using namespace std;

void Intern::displayDetails() const {
    cout << "Intern\n";
    cout << "ID: " << id << "\nName: " << name
         << "\nStipend: " << stipend
         << "\nTotal Pay: " << calculatePay() << endl;
}
