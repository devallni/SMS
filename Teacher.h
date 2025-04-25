// Teacher.h
#pragma once
#include <iostream>
#include <string>
#include "UserManagement.h"
using namespace std;

class Teacher : public UserManagement {
    string name;
    string courseName;
public:
    Teacher() {
        name = "";
        courseName = "";
    }
    Teacher(string _email, string _pass, string _name, string _courseName) : 
        UserManagement(_email, _pass), name(_name), courseName(_courseName) { }

    // returns instructor name
    string getName() {
        return name;
    }

    // returns course name
    string getCourseName() {
        return courseName;
    }

    void showMenu() override;
};

void Teacher::showMenu() {
    cout << "\n--- Teacher Portal ---\n";
    cout << "1. Post Announcements\n";
    cout << "2. Add Marks\n";
    cout << "3. Take Attendance\n";
}
