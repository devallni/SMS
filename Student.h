// Student.h
#pragma once
#include <iostream>
#include <string>
#include "UserManagement.h"
using namespace std;

class Student : public UserManagement {
    string roleNumber;
public:
    Student() {
        roleNumber = "";
    }
    
    Student(string _email, string _pass, string _roleNumber) :
        UserManagement(_email, _pass), roleNumber(_roleNumber) {}
    
    // returns username
    string getRoleNumber() {
        return roleNumber;
    }

    void showMenu() override; // Must override User's pure virtual function
};

void Student::showMenu() {
    cout << "\n--- Student Portal ---\n";
    cout << "1. View Transcript\n";
    cout << "2. View Attendance\n";
    cout << "3. View Announcements\n";
}
