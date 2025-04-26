#pragma once
#include "Person.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

// Teacher class
class Teacher : public Person {
private:
    string teacherId;
    string hireDate;
    string qualification;

public:
    Teacher(int id, const string& name, const string& email, const string& phone,
        const string& password, const string& teacherId, const string& hireDate, const string& qualification)
        : Person(id, name, email, phone, password), teacherId(name), hireDate(hireDate), qualification(qualification) {
    }

    void saveToFile(ofstream& outFile) const override {
        Person::saveToFile(outFile);
        outFile << teacherId << "\n" << hireDate << "\n" << qualification << "\n";
    }

    void loadFromFile(ifstream& inFile) override {
        Person::loadFromFile(inFile);
        getline(inFile, teacherId);
        getline(inFile, hireDate);
        getline(inFile, qualification);
    }

    void display() const override {
        Person::display();
        cout << "Teacher ID: " << teacherId << "\nHire Date: " << hireDate
            << "\nQualification: " << qualification << "\n";
    }
};