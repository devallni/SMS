// main.cpp (Admin Section)
#include <iostream>
#include <fstream>
#include "Admin.h"
#include <algorithm>
using namespace std;

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



int main() 
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

    return 0;
}
