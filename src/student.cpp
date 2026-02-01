#include "Student.h"
#include <iostream>

Student::Student(string n, int roll) : Person(n), rollNumber(roll) {}

void Student::addGrade(int grade) {
    grades.push_back(grade);
}

double Student::calculateAverage() const {
    if (grades.empty()) return 0.0;

    int sum = 0;
    for (int g : grades) sum += g;
    return static_cast<double>(sum) / grades.size();
}

int Student::getRollNumber() const {
    return rollNumber;
}

void Student::display() const {
    cout << "Name: " << name
         << ", Roll: " << rollNumber
         << ", Average: " << calculateAverage() << endl;
}
