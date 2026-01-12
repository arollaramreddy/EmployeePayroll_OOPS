# EmployeePayroll_OOPS
I built this Employee Payroll System in C++ to play around with OOP stuff — like abstraction, inheritance, polymorphism, encapsulation, and composition. It handles Permanent, Contract, and Intern employees, makes sure IDs are unique, lets you search employees, and generates payroll reports. Pretty much a mini real-world payroll system I made to show I actually know OOP.


**OOP principles applied:**

1. Abstraction: Employee abstract class with pure virtual functions

2. Inheritance: Derived classes (PermanentEmployee, ContractEmployee, Intern)

3. Polymorphism: Virtual functions displayDetails() and calculatePay()

4. Encapsulation: Private/protected attributes (salary, bonus, stipend)

5. Composition: Payroll class contains multiple Employee objects

6. Modularity: Separate .h and .cpp files for each class



**Project Structure**
```text
EmployeePayroll_OOPS/
├─ include/
│  ├─ Employee.h
│  ├─ PermanentEmployee.h
│  ├─ ContractEmployee.h
│  ├─ Intern.h
│  └─ Payroll.h
├─ src/
│  ├─ PermanentEmployee.cpp
│  ├─ ContractEmployee.cpp
│  ├─ Intern.cpp
│  ├─ Payroll.cpp
│  └─ main.cpp
└─ README.md
```

**Compilation & Execution**

Compile all .cpp files:
```text
clang++ -std=c++17 -Iinclude src/*.cpp -o EmployeePayroll
```

Run the program:
```text
./EmployeePayroll
```


**Screenshots**

<img width="1470" height="956" alt="Screenshot 2026-01-12 at 12 23 56" src="https://github.com/user-attachments/assets/02e4f2f7-9be8-4bdc-a220-91a3f04a284a" />
<img width="1470" height="956" alt="Screenshot 2026-01-12 at 12 24 05" src="https://github.com/user-attachments/assets/7e66f687-97fd-42c0-94fc-5fa99abdf114" />
<img width="1470" height="956" alt="Screenshot 2026-01-12 at 12 24 25" src="https://github.com/user-attachments/assets/f813ab8f-8a9a-4934-bf58-047861074cfe" />






