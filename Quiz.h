#pragma once
// Quiz class
#include <iostream>
#include "Student.h"
#include "Section.h"
#include "Teacher.h"
class Quiz {
private:
    int quizId;
    Section* section;
    std::string title;
    int maxMarks;
    std::string date;

public:
    Quiz(int quizId, Section* section, const std::string& title, int maxMarks, const std::string& date)
        : quizId(quizId), section(section), title(title), maxMarks(maxMarks), date(date) {}

    void saveToFile(std::ofstream& outFile) const {
        outFile << quizId << "\n";
        section->saveToFile(outFile);
        outFile << title << "\n" << maxMarks << "\n" << date << "\n";
    }

    void loadFromFile(std::ifstream& inFile) {
        inFile >> quizId;
        inFile.ignore();
        
        section = new Section(0, nullptr, nullptr, "", 0);
        section->loadFromFile(inFile);
        
        std::getline(inFile, title);
        inFile >> maxMarks;
        inFile.ignore();
        std::getline(inFile, date);
    }

    void display() const {
        std::cout << "Quiz ID: " << quizId << "\n";
        std::cout << "Section Details:\n";
        section->display();
        std::cout << "Title: " << title << "\nMax Marks: " << maxMarks 
                  << "\nDate: " << date << "\n";
    }
};

