#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <regex>
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

bool isValidPhone(const string& phone) {
    return phone.length() == 11 && all_of(phone.begin(), phone.end(), ::isdigit);
}

bool isValidDate(const string& date) {
    const regex pattern(R"(\d{4}-\d{2}-\d{2})");
    if (!regex_match(date, pattern)) return false;

    // Basic date validation (can be enhanced)
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));

    return (year >= 2000 && year <= 2100) &&
        (month >= 1 && month <= 12) &&
        (day >= 1 && day <= 31);
}


class Admin
{
public:
    void createAccount() {
        cin.ignore(); // ONLY ONCE here before loop
        while (true) {
            string role, name, email, phone, enrollmentDate, hireDate, qualification, password;
            int id;

            cout << "\nEnter 'exit' to quit admin panel.\n";

            // Input role
            cout << "Enter role (student/teacher): ";
            getline(cin, role);
            transform(role.begin(), role.end(), role.begin(), ::tolower);

            if (role == "exit") break;
            if (role != "student" && role != "teacher") {
                cout << "Invalid role. Please enter 'student' or 'teacher'.\n";
                continue;
            }

            // Input ID
            while (true) {
                cout << "Enter ID: ";
                if (!(cin >> id)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid ID. Please enter a number.\n";
                    continue;
                }
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            // Input Name
            cout << "Enter Name: ";
            getline(cin, name);

            // Input Email
            while (true) {
                cout << "Enter Email: ";
                getline(cin, email);
                if (isValidEmail(email)) break;
                cout << "Invalid email. Must be in format: username@lhr.nu.edu.pk\n";
            }

            // Input Phone
            while (true) {
                cout << "Enter Phone (11 digits): ";
                getline(cin, phone);
                if (isValidPhone(phone)) break;
                cout << "Invalid phone. Must be 11 digits (e.g., 03001234567).\n";
            }

            // Input Password
            while (true) {
                cout << "Enter Password (min 9 chars with upper, lower, digit): ";
                getline(cin, password);
                if (isValidPassword(password)) break;
                cout << "Invalid password. Must be at least 9 characters with:\n"
                    << "- At least one lowercase letter\n"
                    << "- At least one uppercase letter\n"
                    << "- At least one digit\n";
            }

            if (role == "student") {
                while (true) {
                    cout << "Enter Enrollment Date (YYYY-MM-DD): ";
                    getline(cin, enrollmentDate);
                    if (isValidDate(enrollmentDate)) break;
                    cout << "Invalid date format. Use YYYY-MM-DD (e.g., 2023-09-01).\n";
                }

                ofstream foutStudent("students.txt", ios::app);
                if (!foutStudent) {
                    cerr << "Error opening students.txt for writing.\n";
                    continue;
                }
                foutStudent << id << "," << name << "," << email << ","
                    << phone << "," << password << "," << enrollmentDate << "\n";
                foutStudent.close();
            }
            else { // teacher
                while (true) {
                    cout << "Enter Hire Date (YYYY-MM-DD): ";
                    getline(cin, hireDate);
                    if (isValidDate(hireDate)) break;
                    cout << "Invalid date format. Use YYYY-MM-DD (e.g., 2020-01-15).\n";
                }

                cout << "Enter Qualification: ";
                getline(cin, qualification);

                ofstream foutTeacher("teachers.txt", ios::app);
                if (!foutTeacher) {
                    cerr << "Error opening teachers.txt for writing.\n";
                    continue;
                }
                foutTeacher << id << "," << name << "," << email << ","
                    << phone << "," << password << "," << hireDate << "," << qualification << "\n";
                foutTeacher.close();
            }

            cout << "\nAccount created successfully!\n";
            cout << "--------------------------------\n";
        }
    }
};

//string encrypt(const string& password) {
//    string encrypted = password;
//    for (char& c : encrypted) {
//        c = c + 3; // Shift each character by 3 positions
//    }
//    return encrypted;
//}
//
//string decrypt(const string& password) {
//    string decrypted = password;
//    for (char& c : decrypted) {
//        c = c - 3; // Shift back each character by 3 positions
//    }
//    return decrypted;
//}