#pragma once
#include "Person.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Teacher class
class Teacher : public Person {
private:
    string teacherId;
    string hireDate;
    string qualification;

public:
    // Constructor
    Teacher(int id, const string& name, const string& email, const string& phone,const string &pasword,
            string teacherId, const string& hireDate, const string& qualification)
        : Person(id, name, email, phone , password), teacherId(teacherId), hireDate(hireDate), qualification(qualification) {}

    // Save Teacher details to a file
    void saveToFile(ofstream& outFile) const override {
        Person::saveToFile(outFile);  // Save Person class details first
        outFile << teacherId << "\n" << hireDate << "\n" << qualification << "\n";  // Save Teacher-specific details
    }

    // Load Teacher details from a file
    void loadFromFile(ifstream& inFile) override {
        Person::loadFromFile(inFile);  // Load Person class details first
        inFile >> teacherId;
        inFile.ignore();
        getline(inFile, hireDate);
        getline(inFile, qualification);
    }

    // Display Teacher details
    void display() const override {
        Person::display();  // Display Person class details first
        cout << "Teacher ID: " << teacherId << "\nHire Date: " << hireDate 
             << "\nQualification: " << qualification << "\n";
    }
};
