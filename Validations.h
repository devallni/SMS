#pragma once
#include "Student.h"
#include "Admin.h"
#include "Teacher.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

void runAdminPanel()
{
    string adminUsername = "admin";
    string adminPassword = "admin123";

    string enteredUsername, enteredPassword;

    cout << "Enter Admin Username: ";
    cin >> enteredUsername;
    cout << "Enter Admin Password: ";
    cin >> enteredPassword;

    if (enteredUsername == adminUsername && enteredPassword == adminPassword)
    {
        cout << "Admin Login Successful!\n";
        Admin admin;
        int choice;
        cout << "Press 1 to create an account or any other key to exit: ";
        cin >> choice;

        if (choice == 1)
        {
            admin.createAccount(); // Call the createAccount function
        }
    }
    else
    {
        cout << "Invalid Admin credentials.\n";
    }
}

// No errors now
bool isStudentEmail(const string& email) {
    if (email.empty() || (email[0] != 'L' && email[0] != 'l')) {
        return false;
    }
    int i = 1;
    while (i < email.size() && isdigit(email[i])) {
        i++;
    }
    // After digits, should have @
    return (i < email.size() && email[i] == '@');
}

void runUserLogin()
{
    string uname, pass;
    cout << "Enter Email (Username): ";
    cin >> uname;
    cout << "Enter Password: ";
    cin >> pass;

    bool loginSuccess = false;
    Person* user = nullptr;

    if (isStudentEmail(uname))
    {
        // Student login
        ifstream finStudents("students.txt");
        if (!finStudents)
        {
            cout << "Error opening students.txt file.\n";
            return;
        }

        string line;
        while (getline(finStudents, line))
        {
            stringstream ss(line);
            string idStr, name, email, phone, password, s_id, enrollmentDate;

            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, email, ',');
            getline(ss, phone, ',');
            getline(ss, password, ',');
            getline(ss, enrollmentDate);
            s_id = "l" + string(1, enrollmentDate[2]) + string(1, enrollmentDate[3]) + idStr;

            if (email == uname && password == pass)
            {
                int id = stoi(idStr);
                user = new Student(id, name, email, phone, password, s_id, enrollmentDate);
                loginSuccess = true;
                break;
            }
        }
        finStudents.close();
    }
    else
    {
        // Teacher login
        ifstream finTeachers("teachers.txt");
        if (!finTeachers)
        {
            cout << "Error opening teachers.txt file.\n";
            return;
        }

        string line;
        while (getline(finTeachers, line))
        {
            stringstream ss(line);
            string idStr, name, email, phone, password, hireDate, qualification;

            getline(ss, idStr, ',');
            getline(ss, name, ',');
            getline(ss, email, ',');
            getline(ss, phone, ',');
            getline(ss, password, ',');
            getline(ss, hireDate, ',');
            getline(ss, qualification);

            if (email == uname && password == pass)
            {
                int id = stoi(idStr);
                user = new Teacher(id, name, email, phone, password, name, hireDate, qualification);
                loginSuccess = true;
                break;
            }
        }
        finTeachers.close();
    }

    if (loginSuccess && user != nullptr)
    {
        cout << "\nLogin Successful!\n";
        user->display();
        delete user;
    }
    else
    {
        cout << "\nInvalid credentials. Try again.\n";
    }
}