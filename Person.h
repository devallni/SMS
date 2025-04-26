#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Base Person class
class Person
{
protected:
    int id;
    string name;
    string email;
    string phone;
    string password;

public:
    Person(int id, const string& name, const string& email, const string& phone, const string& password)
        : id(id), name(name), email(email), phone(phone), password(password) {
    }

    virtual ~Person() {}

    int getId() const { return id; }
    string getName() const { return name; }
    string getEmail() const { return email; }
    string getPhone() const { return phone; }
    string getPassword() const { return password; }

    virtual void saveToFile(ofstream& outFile) const {
        outFile << id << "\n" << name << "\n" << email << "\n" << phone << "\n" << password << "\n";
    }

    virtual void loadFromFile(ifstream& inFile) {
        inFile >> id;
        inFile.ignore();
        getline(inFile, name);
        getline(inFile, email);
        getline(inFile, phone);
        getline(inFile, password);
    }

    virtual void display() const {
        cout << "ID: " << id << "\nName: " << name
            << "\nEmail: " << email << "\nPhone: " << phone << "\n";
    }
};