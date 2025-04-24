// Admin.h
#pragma once
#include <string>
#include <fstream>
using namespace std;

class Admin 
{
public:
    void createAccount(const string& role, const string& username, const string& password)
    {
        ofstream fout("users.txt", ios::app); // Open file in append mode
        if (!fout) {
            cout << "Error opening users.txt file for writing.\n";
            return;
        }

        fout << role << endl << username << endl << password << endl;
        fout.close();
        cout << "Account created successfully.\n";
    }
};

