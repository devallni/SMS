// UserManagement.h

#pragma once
#include <iostream>
#include <string>
using namespace std;

class UserManagement {
protected:
    string email; // email
    string password;
public:
    // Default constructor
    UserManagement() {
        email = "";
        password = "";
    }

    // Parameterized constructor
    UserManagement(string _email, string _pass) : email(_email), password(_pass) {}
    
    // returns username
    string getEmail() {
        return email;
    }

    // returns password
    string getPassword() {
        return password;
    }
    
    virtual void showMenu() = 0; // pure virtual function -> must be implemented by child classes
};

string UserManagement::getEmail() {
    return email;
}

string UserManagement::getPassword() {
    return password;
}
