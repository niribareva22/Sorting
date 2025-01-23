//
// Created by niribareva22 on 1/23/2025.
//

#ifndef SORTING_STUDENT_H
#define SORTING_STUDENT_H

#include <string>
#include <vector>

struct Student {
    std::string name;
    double grade;
};

void createSampleStudents(std::vector<Student>& students);
void printStudents(const std::vector<Student>& students);

#endif //SORTING_STUDENT_H
