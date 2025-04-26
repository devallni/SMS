#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
#include "Section.h"

using namespace std;

// Enrollment class
class Enrollment {
private:
    int enrollmentId;
    Student* student;
    Section* section;
    string enrollmentDate;

public:
    Enrollment(int enrollmentId, Student* student, Section* section, const string& enrollmentDate)
        : enrollmentId(enrollmentId), student(student), section(section), enrollmentDate(enrollmentDate) {}

    void saveToFile(ofstream& outFile) const {
        outFile << enrollmentId << "\n";
        student->saveToFile(outFile);
        section->saveToFile(outFile);
        outFile << enrollmentDate << "\n";
    }

    void loadFromFile(ifstream& inFile) {
        inFile >> enrollmentId;
        inFile.ignore();

        student = new Student(0, "", "", "", 0, "");
        student->loadFromFile(inFile);

        section = new Section(0, nullptr, nullptr, "", 0);
        section->loadFromFile(inFile);

        getline(inFile, enrollmentDate);
    }

    void display() const {
        cout << "Enrollment ID: " << enrollmentId << "\n";
        cout << "Student Details:\n";
        student->display();
        cout << "Section Details:\n";
        section->display();
        cout << "Enrollment Date: " << enrollmentDate << "\n";
    }
};
