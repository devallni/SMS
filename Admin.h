#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

bool isValidEmail(const string& email)
{
    string domain = "@lhr.nu.edu.pk";
    if (email.size() <= 14)
        return false;

    string emailDomain = email.substr(email.size() - 14);
    return emailDomain == domain;
}

bool isValidPassword(const string& password)
{
    if (password.length() < 9)
        return false;

    bool hasLower = false, hasUpper = false, hasDigit = false;
    for (char ch : password)
    {
        if (ch >= 'a' && ch <= 'z') hasLower = true;
        if (ch >= 'A' && ch <= 'Z') hasUpper = true;
        if (ch >= '0' && ch <= '9') hasDigit = true;
    }
    return hasLower && hasUpper && hasDigit;
}

class Admin
{
public:
    void createAccount()
    {
        while (true)
        {
            string role, name, email, phone, enrollmentDate, hireDate, qualification, password;
            int id;

            cout << "\nEnter 'exit' to quit admin panel.\n";
            cout << "Enter role (student/teacher): ";
            cin >> role;
            transform(role.begin(), role.end(), role.begin(), ::tolower);

            if (role == "exit")
                break;
            else if (role != "student" && role != "teacher")
            {
                cout << "Invalid role. Please enter 'student' or 'teacher'.\n";
                continue;
            }

            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Email: ";
            cin >> email;

            if (!isValidEmail(email))
            {
                cout << "Invalid email. Must end with '@lhr.nu.edu.pk'.\n";
                continue;
            }

            cout << "Enter Phone: ";
            cin >> phone;
            cout << "Enter Password: ";
            cin >> password;

            if (!isValidPassword(password))
            {
                cout << "Invalid password. Must be at least 9 characters and contain lowercase, uppercase, and a digit.\n";
                continue;
            }

            if (role == "student")
            {
                cout << "Enter Enrollment Date: ";
                cin >> enrollmentDate;
                ofstream foutStudent("students.txt", ios::app);
                if (!foutStudent)
                {
                    cout << "Error opening students.txt for writing.\n";
                    continue;
                }
                foutStudent << id << "," << name << "," << email << "," << phone << "," << password << "," << enrollmentDate << "\n";
                foutStudent.close();
            }
            else if (role == "teacher")
            {
                cout << "Enter Hire Date: ";
                cin >> hireDate;
                cout << "Enter Qualification: ";
                cin >> qualification;
                ofstream foutTeacher("teachers.txt", ios::app);
                if (!foutTeacher)
                {
                    cout << "Error opening teachers.txt for writing.\n";
                    continue;
                }
                foutTeacher << id << "," << name << "," << email << "," << phone << "," << password << "," << hireDate << "," << qualification << "\n";
                foutTeacher.close();
            }
            cout << "Account created successfully!\n";
        }
    }
};