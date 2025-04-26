#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"

using namespace std;
void runUserLogin()
{
    int capacity = 10;
    int userCount = 0;

    Person** users = new Person * [capacity];

    // Reading Students
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
        string idStr, name, email, phone, enrollmentDate;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, phone, ',');
        getline(ss, enrollmentDate, ',');

        if (userCount == capacity)
        {
            capacity *= 2;
            Person** newUsers = new Person * [capacity];
            for (int i = 0; i < userCount; i++)
            {
                newUsers[i] = users[i];
            }
            delete[] users;
            users = newUsers;
        }

        int id = stoi(idStr);
        users[userCount++] = new Student(id, name, email, phone, id, enrollmentDate);
    }
    finStudents.close();

    // Reading Teachers
    ifstream finTeachers("teachers.txt");
    if (!finTeachers)
    {
        cout << "Error opening teachers.txt file.\n";
        return;
    }

    while (getline(finTeachers, line))
    {
        stringstream ss(line);
        string idStr, name, email, phone, hireDate, qualification;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, phone, ',');
        getline(ss, hireDate, ',');
        getline(ss, qualification, ',');

        if (userCount == capacity)
        {
            capacity *= 2;
            Person** newUsers = new Person * [capacity];
            for (int i = 0; i < userCount; i++)
            {
                newUsers[i] = users[i];
            }
            delete[] users;
            users = newUsers;
        }

        int id = stoi(idStr);
        users[userCount++] = new Teacher(id, name, email, phone, id, hireDate, qualification);
    }
    finTeachers.close();

    // Login Part
    string uname, pass;
    cout << "Enter Email (Username): ";
    cin >> uname;
    cout << "Enter Password (No password checking here because Person class doesn't store password): ";
    cin >> pass;

    bool loginSuccess = false;

    for (int i = 0; i < userCount; i++)
    {
        if (users[i]->getEmail() == uname && users[i]->getPassword() == pass)
        {
            cout << "\nLogin Successful!\n";
            users[i]->display(); // show student or teacher menu
            loginSuccess = true;
            break;
        }
    }
    if (!loginSuccess)
    {
        cout << "\nInvalid credentials. Try again.\n";
    }

    // Cleanup
    for (int i = 0; i < userCount; i++)
    {
        delete users[i];
    }
    delete[] users;
}


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
