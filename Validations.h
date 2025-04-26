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
void runUserLogin()
{
    int capacity = 10;
    int userCount = 0;
    Person** users = new Person * [capacity];

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
        getline(ss, s_id, ',');
        getline(ss, enrollmentDate, ',');

        if (userCount == capacity)
        {
            capacity *= 2;
            Person** newUsers = new Person * [capacity];
            for (int i = 0; i < userCount; i++)
                newUsers[i] = users[i];
            delete[] users;
            users = newUsers;
        }

        int id = stoi(idStr);
        users[userCount++] = new Student(id, name, email, phone, password, s_id, enrollmentDate);
    }
    finStudents.close();

    ifstream finTeachers("teachers.txt");
    if (!finTeachers)
    {
        cout << "Error opening teachers.txt file.\n";
        return;
    }

    while (getline(finTeachers, line))
    {
        stringstream ss(line);
        string idStr, name, email, phone, password, t_id, hireDate, qualification;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, phone, ',');
        getline(ss, password, ',');
        getline(ss, t_id, ',');
        getline(ss, hireDate, ',');
        getline(ss, qualification, ',');

        if (userCount == capacity)
        {
            capacity *= 2;
            Person** newUsers = new Person * [capacity];
            for (int i = 0; i < userCount; i++)
                newUsers[i] = users[i];
            delete[] users;
            users = newUsers;
        }

        int id = stoi(idStr);
        users[userCount++] = new Teacher(id, name, email, phone, password, t_id, hireDate, qualification);
    }
    finTeachers.close();
}