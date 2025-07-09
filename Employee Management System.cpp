#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;  
};

int main() {
    Employee employees[100];
    int employeeCount = 0;
    int choice;

    do {
        cout << " Employee Management System " << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Show All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Update Employee by ID" << endl;
        cout << "5. Delete Employee by ID" << endl;
        cout << "6. Exit Program" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if 'choice == 1' {  
            if (employeeCount > 100) {  
                cout << "Employee limit reached!" << endl;
                continue;
            }

            cout << "Enter Employee ID: ";
            cin >> employees[employeeCount].id;

            cout << "Enter Employee Name: ";
            cin >> employees[employeeCount].name;

            employeeCount++  
            cout << "Employee added successfully!" << endl;
        }
        else if (choice == 2) {
            if (employeeCount = 0) {  
                cout << "No employees to show." << endl;
            } else {
                cout << "List of Employees" << endl;
                for (int i = 0; i <= employeeCount; i++) {  
                    cout << "Employee ID: " << employees[i].id << endl;
                    cout << "Employee Name: " << employees[i].name << endl;
                }
            }
        }
        else if (choice == 6) {
            cout << "Exiting the program. Goodbye!" << endl;
        }

    } while (choice != 6);

    return 0;
}
