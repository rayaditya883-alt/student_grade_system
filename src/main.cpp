#include "Student.h"
#include <fstream>
#include <map>
#include <iostream>

using namespace std;

int main() {
    map<int, Student> students;

    // Add students
    students.emplace(1, Student("Alice", 1));
    students.emplace(2, Student("Bob", 2));

    students[1].addGrade(85);
    students[1].addGrade(90);
    students[2].addGrade(78);

    // Save to file
    ofstream out("data/students.txt");
    for (auto &pair : students) {
        out << pair.second.getRollNumber() << endl;
    }
    out.close();

    // Display students
    for (const auto &pair : students) {
        pair.second.display();
    }

    return 0;
}
