#pragma once
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Validations.h"
#include "Admin.h"
using namespace std;


// Base Person class
class Person
{
protected:
    int id;
    std::string name;
    std::string email;
    std::string phone;
    std::string password; // <-- New attribute

public:
    Person(int id, const std::string& name, const std::string& email, const std::string& phone, const std::string& password)
        : id(id), name(name), email(email), phone(phone), password(password) {}

    virtual ~Person() {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getEmail() const { return email; }
    std::string getPhone() const { return phone; }
    std::string getPassword() const { return password; } // <-- New getter

    virtual void saveToFile(std::ofstream& outFile) const {
        outFile << id << "\n" << name << "\n" << email << "\n" << phone << "\n" << password << "\n"; // <-- Save password too
    }

    virtual void loadFromFile(std::ifstream& inFile) {
        inFile >> id;
        inFile.ignore();
        std::getline(inFile, name);
        std::getline(inFile, email);
        std::getline(inFile, phone);
        std::getline(inFile, password); // <-- Load password too
    }

    virtual void display() const {
        std::cout << "ID: " << id << "\nName: " << name
            << "\nEmail: " << email << "\nPhone: " << phone << "\n";
        // Password is private, not displaying it here
    }
};
