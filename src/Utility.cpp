//
// Created by niribareva22 on 1/23/2025.
//
#include "Utility.h"
#include <iostream>
#include "SortAlgorithms.h"
using namespace std;

int getSortingChoice() {
    int choice;
    cout << "Choose sorting algorithm: 1) Selection Sort 2) Bubble Sort 3) Insertion Sort"<<endl;
    cin >> choice;
    return choice;
}

void sortStudents(vector<Student>& students, int choice) {
    switch (choice) {
        case 1: selectionSort(students); break;
        case 2: bubbleSort(students); break;
        case 3: insertionSort(students); break;
        default:
            cout << "Invalid choice."<<endl;
            break;
    }
}