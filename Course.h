#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream> // You forgot to include this for stringstream!
using namespace std;

// Course class
class Course 
{
private:
    int courseId;
    string name;
    string description;
    int creditHours;

public:
    Course(int courseId, const string& name, const string& description, int creditHours)
        : courseId(courseId), name(name), description(description), creditHours(creditHours) {}

    void saveToFile(ofstream& outFile) const 
    {
        outFile << courseId << "\n" << name << "\n" << description << "\n" << creditHours << "\n";
    }

    void loadFromFile(ifstream& inFile) 
    {
        string line;
        if (getline(inFile, line)) 
        {
            stringstream ss(line);
            string temp;

            getline(ss, temp, ',');
            courseId = stoi(temp);

            getline(ss, name, ',');
            getline(ss, description, ',');

            getline(ss, temp, ',');
            creditHours = stoi(temp);
        }
    }

    void display() const 
    {
        cout << "Course ID: " << courseId << "\nName: " << name 
             << "\nDescription: " << description << "\nCredit Hours: " << creditHours << "\n";
    }
};
