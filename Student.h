#pragma once
#include "Person.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

// Student class
class Student : public Person {
private:
    string studentId;
    string enrollmentDate;

public:
    Student(int id, const string& name, const string& email, const string& phone,
        const string& password, const string& studentId, const string& enrollmentDate)
        : Person(id, name, email, phone, password), studentId(studentId), enrollmentDate(enrollmentDate) {
    }

    void saveToFile(ofstream& outFile) const override {
        Person::saveToFile(outFile);
        outFile << studentId << "\n" << enrollmentDate << "\n";
    }

    void loadFromFile(ifstream& inFile) override {
        Person::loadFromFile(inFile);
        getline(inFile, studentId);
        getline(inFile, enrollmentDate);
    }

    void display() const override {
        Person::display();
        cout << "Student ID: " << studentId << "\nEnrollment Date: " << enrollmentDate << "\n";
    }
};