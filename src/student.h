#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

class Student : public Person {
private:
    int rollNumber;
    vector<int> grades;

public:
    Student(string name, int roll);

    void addGrade(int grade);
    double calculateAverage() const;
    int getRollNumber() const;
    void display() const override;
};

#endif
