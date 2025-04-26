#pragma once
#include <iostream>
#include "Student.h"
#include "Section.h"
#include "Teacher.h"
class AttendanceRecord {
private:
    int recordId;
    Student* student;
    Section* section;
    std::string date;
    std::string status; // "present", "absent", "late"

public:
    AttendanceRecord(int recordId, Student* student, Section* section, const std::string& date, const std::string& status)
        : recordId(recordId), student(student), section(section), date(date), status(status) {}

    void saveToFile(std::ofstream& outFile) const {
        outFile << recordId << "\n";
        student->saveToFile(outFile);
        section->saveToFile(outFile);
        outFile << date << "\n" << status << "\n";
    }

    void loadFromFile(std::ifstream& inFile) {
        inFile >> recordId;
        inFile.ignore();
        
        student = new Student(0, "", "", "", "", "", "");
        student->loadFromFile(inFile);
        
        section = new Section(0, nullptr, nullptr, "", 0);
        section->loadFromFile(inFile);
        
        std::getline(inFile, date);
        std::getline(inFile, status);
    }

    void display() const {
        std::cout << "Attendance Record ID: " << recordId << "\n";
        std::cout << "Student Details:\n";
        student->display();
        std::cout << "Section Details:\n";
        section->display();
        std::cout << "Date: " << date << "\nStatus: " << status << "\n";
    }
};
