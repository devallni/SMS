#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Course.h"
#include "Teacher.h"

using namespace std;

// Section class
class Section {
private:
    int sectionId;
    Course* course;
    Teacher* teacher;
    string semester;
    int year;

public:
    Section(int sectionId, Course* course, Teacher* teacher, const string& semester, int year)
        : sectionId(sectionId), course(course), teacher(teacher), semester(semester), year(year) {
    }

    void saveToFile(ofstream& outFile) const {
        outFile << sectionId << "\n";
        course->saveToFile(outFile);
        teacher->saveToFile(outFile);
        outFile << semester << "\n" << year << "\n";
    }

    void loadFromFile(ifstream& inFile) {
        inFile >> sectionId;
        inFile.ignore();

        course = new Course(0, "", "", 0);
        course->loadFromFile(inFile);

        teacher = new Teacher(0, "", "", "", "", "", "", "");
        teacher->loadFromFile(inFile);

        getline(inFile, semester);
        inFile >> year;
        inFile.ignore();
    }

    void display() const {
        cout << "Section ID: " << sectionId << "\n";
        cout << "Course Details:\n";
        course->display();
        cout << "Teacher Details:\n";
        teacher->display();
        cout << "Semester: " << semester << "\nYear: " << year << "\n";
    }
};