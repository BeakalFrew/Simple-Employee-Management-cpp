include <iostream>
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

        if (choice == 1) {
            if (employeeCount >= 100) {
                cout << "Employee limit reached!" << endl;
                continue;
            }

            cout << "Enter Employee ID: ";
            cin >> employees[employeeCount].id;

            cout << "Enter Employee Name: ";
            cin >> employees[employeeCount].name;

            employeeCount++;
            cout << "Employee added successfully!" << endl;
        }
        else if (choice == 2) {
            if (employeeCount == 0) {
                cout << "No employees to show." << endl;
            } else {
                cout << "List of Employees" << endl;
                for (int i = 0; i < employeeCount; i++) {
                    cout << "Employee ID: " << employees[i].id << endl;
                    cout << "Employee Name: " << employees[i].name << endl;
                }
            }
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter Employee ID to search: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < employeeCount; i++) {
                if (employees[i].id == searchId) {
                    cout << "Employee found!" << endl;
                    cout << "ID: " << employees[i].id << endl;
                    cout << "Name: " << employees[i].name << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found!" << endl;
            }
        }
        else if (choice == 4) {
            int updateId;
            cout << "Enter Employee ID to update: ";
            cin >> updateId;

            bool found = false;
            for (int i = 0; i < employeeCount; i++) {
                if (employees[i].id == updateId) {
                    cout << "Enter new name (one word): ";
                    cin >> employees[i].name;
                    cout << "Employee updated!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found!" << endl;
            }
        }
        else if (choice == 5) {
            int deleteId;
            cout << "Enter Employee ID to delete: ";
            cin >> deleteId;

            bool found = false;
            for (int i = 0; i < employeeCount; i++) {
                if (employees[i].id == deleteId) {
                    for (int j = i; j < employeeCount - 1; j++) {
                        employees[j] = employees[j + 1];
                    }
                    employeeCount--;
                    cout << "Employee deleted!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found!" << endl;
            }
        }
        else if (choice == 6) {
            cout << "Exiting the program. Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
