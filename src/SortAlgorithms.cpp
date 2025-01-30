//
// Created by niribareva22 on 1/23/2025.
//
#include "SortAlgorithms.h"
using namespace std;

void selectionSort(vector<Student>& students) {
    for (size_t i = 0; i < students.size() - 1; ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < students.size(); ++j) {
            if (students[j].grade < students[minIndex].grade) {
                minIndex = j;
            }
        }
        swap(students[i], students[minIndex]);
    }
}

void bubbleSort(vector<Student>& students) {
    bool swapped;
    for (size_t i = 0; i < students.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < students.size() - i - 1; ++j) {
            if (students[j].grade > students[j + 1].grade) {
                swap(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void insertionSort(vector<Student>& students) {
    for (size_t i = 1; i < students.size(); ++i) {
        Student key = students[i];
        size_t j = i - 1;
        while (j < students.size() && students[j].grade > key.grade) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

void cocktailSort(vector<Student>& students) {
    bool swapped = true;
    size_t start = 0;
    size_t end = students.size();
    while (swapped) {
        swapped = false;
        for (size_t i = start; i < end - 1; ++i) {
            if (students[i].grade > students[i + 1].grade) {
                swap(students[i], students[i + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
        swapped = false;
        end--;
        for (size_t i = end - 1; i > start; --i) {
            if (students[i - 1].grade > students[i].grade) {
                swap(students[i - 1], students[i]);
                swapped = true;
            }
        }
        start++;
    }
}