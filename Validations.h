#pragma once

//ref class Validations
//{
//public:
//    static bool isEmailValid(System::String^ email) {
//        return email->Contains("@"); // simple dummy check
//    }
//
//    static bool isPasswordStrong(System::String^ password) {
//        return password->Length >= 6;
//    }
//};

#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
#include "Teacher.h"
#include <algorithm>
using namespace std;

void runUserLogin()
{
    int capacity = 10;
    int userCount = 0;

    UserManagement** users = new UserManagement * [capacity];
    ifstream fin("users.txt");
    if (!fin)
    {
        cout << "Error opening users.txt file.\n";
        return;
    }

    string role, username, password, additionalInfo, additionalinfo2;
    while (fin >> role >> username >> password)
    {
        if (role == "student")
        {
            fin >> additionalInfo; // Read student role number
        }
        else if (role == "teacher") {
            fin >> additionalInfo; // Read teacher name or course name
            fin >> additionalinfo2;
        }

        // Grow array if needed
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

        // Create objects based on the role
        if (role == "student")
        {
            users[userCount] = new Student(username, password, additionalInfo);  // Pass role number for student
            userCount += 1;
        }
        else if (role == "teacher")
        {
            users[userCount] = new Teacher(username, password, additionalInfo, additionalinfo2);
            userCount += 1;
        }
    }
    fin.close();

    // Login Part
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
            users[i]->showMenu(); // show student or teacher menu
            loginSuccess = true;
            break;
        }
    }
    if (!loginSuccess)
    {
        cout << "\nInvalid credentials. Try again.\n";
    }

    for (int i = 0; i < userCount; i++)
    {
        delete users[i];
    }
    delete[] users;
    return;
}

bool isValidEmail(const string& email)
{
    string domain = "@lhr.nu.edu.pk";
    if (email.size() <= 14)
    {
        return false;
    }
    string emailDomain = email.substr(email.size() - 14); // Extract the last 14 characters from the email
    if (emailDomain == domain)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool isValidPassword(const string& password)
{
    if (password.length() < 9)
    {
        return false;
    }
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    for (int i = 0; i < password.length(); i++)
    {
        char ch = password[i];
        if (ch >= 'a' && ch <= 'z')
        {
            hasLower = true;
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            hasUpper = true;
        }
        if (ch >= '0' && ch <= '9')
        {
            hasDigit = true;
        }
    }
    if (hasLower && hasUpper && hasDigit)
    {
        return true;
    }
    else {
        return false;
    }
}



void runAdminPanel()
{
    string adminUsername = "admin";  // Hardcoded admin credentials
    string adminPassword = "admin123";

    string enteredUsername, enteredPassword;

    cout << "Enter Admin Username: ";
    cin >> enteredUsername;
    cout << "Enter Admin Password: ";
    cin >> enteredPassword;

    if (enteredUsername == adminUsername && enteredPassword == adminPassword) {
        cout << "Admin Login Successful!\n";

        Admin admin;
        string role, username, password;

        while (true)
        {
            cout << "\nEnter 'exit' to quit admin panel.\n";
            cout << "Enter role (student/teacher): ";
            cin >> role;
            transform(role.begin(), role.end(), role.begin(), ::tolower);

            if (role == "exit")
            {
                break;
            }
            else if (role != "student" && role != "teacher")
            {
                cout << "Invalid role. Please enter 'student' or 'teacher'.\n";
                continue;
            }
            cout << "Enter username (email): ";
            cin >> username;
            if (!isValidEmail(username))
            {
                cout << "Invalid email. It must end with '@lhr.nu.edu.pk'.\n";
                continue;
            }
            cout << "Enter password: ";
            cin >> password;
            if (!isValidPassword(password))
            {
                cout << "Invalid password. Must be at least 9 characters and contain lowercase, uppercase, and a digit.\n";
                continue;
            }
            admin.createAccount(role, username, password);
        }
    }
    else
    {
        cout << "Invalid Admin credentials.\n";
    }

    return;
}

