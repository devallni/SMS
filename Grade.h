#pragma once
#include <iostream>
#include "Student.h"
#include "Section.h"
#include "Teacher.h"
#include "Enrollment.h"
#include "Quiz.h"

// Grade class
class Grade {
private:
    int gradeId;
    Quiz* quiz;
    Enrollment* enrollment;
    int marksObtained;

public:
    Grade(int gradeId, Quiz* quiz, Enrollment* enrollment, int marksObtained)
        : gradeId(gradeId), quiz(quiz), enrollment(enrollment), marksObtained(marksObtained) {
    }

    void saveToFile(std::ofstream& outFile) const {
        outFile << gradeId << "\n";
        quiz->saveToFile(outFile);
        enrollment->saveToFile(outFile);
        outFile << marksObtained << "\n";
    }

    void loadFromFile(std::ifstream& inFile) {
        inFile >> gradeId;
        inFile.ignore();

        quiz = new Quiz(0, nullptr, "", 0, "");
        quiz->loadFromFile(inFile);

        enrollment = new Enrollment(0, nullptr, nullptr, "");
        enrollment->loadFromFile(inFile);

        inFile >> marksObtained;
        inFile.ignore();
    }

    void display() const {
        std::cout << "Grade ID: " << gradeId << "\n";
        std::cout << "Quiz Details:\n";
        quiz->display();
        std::cout << "Enrollment Details:\n";
        enrollment->display();
        std::cout << "Marks Obtained: " << marksObtained << "\n";
    }
};