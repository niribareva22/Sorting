#include <iostream>
#include "Student.h"
#include "Utility.h"
using namespace std;

int main() {
    vector<Student> students;
    createSampleStudents(students);

    cout << "Original list:"<<endl;
    printStudents(students);

    int choice = getSortingChoice();
    sortStudents(students, choice);

    cout << "Sorted list:"<<endl;
    printStudents(students);

}