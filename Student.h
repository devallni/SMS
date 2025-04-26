#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"

using namespace std;

// Student class
class Student : public Person {
private:
    int studentId;
    string enrollmentDate;

public:
    Student(int id, const string& name, const string& email, const string& phone,
          const string & password , int studentId, const string& enrollmentDate)
        : Person(id, name, email, phone , password), studentId(studentId), enrollmentDate(enrollmentDate) {}

    void saveToFile(ofstream& outFile) const override 
    {
        Person::saveToFile(outFile);
        outFile << studentId << "\n" << enrollmentDate << "\n";
    }

    void loadFromFile(ifstream& inFile) override {
        Person::loadFromFile(inFile);
        inFile >> studentId;
        inFile.ignore();
        getline(inFile, enrollmentDate);
    }

    void display() const override 
    {
        Person::display();
        cout << "Student ID: " << studentId << "\nEnrollment Date: " << enrollmentDate << "\n";
    }
};
