#include <iostream>
#include <string>
#include "Payroll.h"
#include "PermanentEmployee.h"
#include "ContractEmployee.h"
#include "Intern.h"
#include "Employee.h"
using namespace std;

int main() {
    Payroll payroll;
    int choice;

    do {
        cout << "\n===== Employee Payroll System =====\n";
        cout << "1. Add Permanent Employee\n";
        cout << "2. Add Contract Employee\n";
        cout << "3. Add Intern\n";
        cout << "4. Generate Payroll Report\n";
        cout << "5. Search Employee by ID\n";
        cout << "6. Exit Application\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                string name;
                int id;
                double salary, bonus;

                cout << "Enter employee ID: ";
                cin >> id;
                if (payroll.isDuplicateID(id)) {
                    cout << "Error: Employee ID already exists! Employee not added.\n";
                    break;
                }

                cin.ignore();
                cout << "Enter full name: ";
                getline(cin, name);

                cout << "Enter base salary: ";
                cin >> salary;
                cout << "Enter bonus: ";
                cin >> bonus;

                payroll.addEmployee(new PermanentEmployee(name, id, salary, bonus));
                cout << "Permanent Employee added successfully!\n";
                break;
            }

            case 2: {
                string name;
                int id;
                double rate;
                int hours;

                cout << "Enter employee ID: ";
                cin >> id;
                if (payroll.isDuplicateID(id)) {
                    cout << "Error: Employee ID already exists! Employee not added.\n";
                    break;
                }

                cin.ignore();
                cout << "Enter full name: ";
                getline(cin, name);

                cout << "Enter hourly rate: ";
                cin >> rate;
                cout << "Enter hours worked: ";
                cin >> hours;

                payroll.addEmployee(new ContractEmployee(name, id, rate, hours));
                cout << "Contract Employee added successfully!\n";
                break;
            }

            case 3: {
                string name;
                int id;
                double stipend;

                cout << "Enter employee ID: ";
                cin >> id;
                if (payroll.isDuplicateID(id)) {
                    cout << "Error: Employee ID already exists! Employee not added.\n";
                    break;
                }

                cin.ignore();
                cout << "Enter full name: ";
                getline(cin, name);

                cout << "Enter stipend: ";
                cin >> stipend;

                payroll.addEmployee(new Intern(name, id, stipend));
                cout << "Intern added successfully!\n";
                break;
            }

            case 4:
                cout << "\n===== Payroll Report =====\n";
                payroll.generateReport();
                break;

            case 5: {
                int id;
                cout << "Enter Employee ID to search: ";
                cin >> id;

                Employee* emp = payroll.searchByID(id);
                if (emp != nullptr) {
                    cout << "\nEmployee Details:\n";
                    emp->displayDetails();
                } else {
                    cout << "Employee with ID " << id << " not found.\n";
                }
                break;
            }

            case 6:
                cout << "Exiting application. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please enter 1-6.\n";
        }
    } while(choice != 6);

    return 0;
}