#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main() 
{
    int capacity = 10;
    int userCount = 0;
    UserManagement** users = new UserManagement * [capacity];

    ifstream fin("users.txt");
    if (!fin) 
    {
        cout << "Error opening users.txt file.\n";
        return 1;
    }

    string role, username, password;

    while (getline(fin, role)) 
    {
        if (!getline(fin, username))
        {
            break;
        }
        if (!getline(fin, password))
        {
            break;
        }

        if (userCount == capacity) 
        {
            capacity *= 2;
            UserManagement** newUsers = new UserManagement * [capacity];
            for (int i = 0; i < userCount; i++) 
            {
                newUsers[i] = users[i];
            }
            delete[] users;
            users = newUsers;
        }

        // Create user based on role
        if (role == "student") 
        {
            users[userCount++] = new Student(username, password);
        }
        else if (role == "teacher") 
        {
            users[userCount++] = new Teacher(username, password);
        }
        string skipLine;
        getline(fin, skipLine);
    }

    fin.close();
    string uname, pass;
    cout << "Enter Username (email): ";
    cin >> uname;
    cout << "Enter Password: ";
    cin >> pass;

    bool loginSuccess = false;

    for (int i = 0; i < userCount; i++) 
    {
        if (users[i]->getEmail() == uname && users[i]->getPassword() == pass) 
        {
            cout << "\nLogin Successful!\n";
            users[i]->showMenu();
            loginSuccess = true;
            break;
        }
    }

    if (!loginSuccess) 
    {
        cout << "\nInvalid credentials.\n";
    }

    // Free memory
    for (int i = 0; i < userCount; i++) 
    {
        delete users[i];
    }
    delete[] users;

    return 0;
}
