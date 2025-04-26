// Admin.h
#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Admin 
{
public:
    void createAccount(const string& role, const string& username, const string& password)
    {
        ofstream fout("users.txt", ios::app); // Open the file in append mode
        if (!fout) 
        {
            cout << "Error opening users.txt file.\n";
            return;
        }
        if (role == "student") 
        {
            string roleNumber;
            cout << "Enter Student Role Number: ";
            cin >> roleNumber;

            fout << "student " << username << " " << password << " " << roleNumber << endl;
            cout << "Student account created successfully.\n";
        }
        else if (role == "teacher") 
        {
            string name, courseName;
            cout << "Enter Teacher Name: ";
            cin >> name;
            cout << "Enter Course Name: ";
            cin >> courseName;
            fout << "teacher " << username << " " << password << " " << name << " " << courseName << endl;
            cout << "Teacher account created successfully.\n";
        }
        else 
        {
            cout << "Invalid role! Please enter 'student' or 'teacher'.\n";
        }
        fout.close();
    }
};

