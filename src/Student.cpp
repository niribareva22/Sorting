//
// Created by niribareva22 on 1/23/2025.
//
#include "Student.h"
#include <iostream>
using namespace std;

void createSampleStudents(vector<Student>& students) {

    students.push_back({"Alice", 85.5});
    students.push_back({"Bob", 90.0});
    students.push_back({"Charlie", 75.3});
    students.push_back({"Diana", 95.2});
}

void printStudents(const vector<Student>& students) {
    for (const auto& student : students) {
        cout << student.name << ": " << student.grade << "\n";
    }
}