#include "../src/Student.h"
#include <cassert>
#include <iostream>

int main() {
    Student s("TestStudent", 100);
    s.addGrade(80);
    s.addGrade(90);

    assert(s.calculateAverage() == 85.0);

    cout << "All tests passed!" << endl;
    return 0;
}
