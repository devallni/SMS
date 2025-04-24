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

    return 0;
}
