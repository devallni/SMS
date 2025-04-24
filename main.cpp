#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "UserManagement.h"
#include "Validations.h"

using namespace std;

int main()
{
    int choice;
    cout << "Welcome to University Portal\n";
    cout << "1. Admin Login\n";
    cout << "2. Student/Teacher Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        runAdminPanel();
    }
    else if (choice == 2) 
    {
        runUserLogin();
    }
    else 
    {
        cout << "Invalid option.\n";
    }

    return 0;
}
