#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentName;
    int studentRoll;
    double studentMarks;
};

class SchoolLab {
public:
    void initialize(Student *student, const string &schoolName, int schoolRoll, double schoolMarks) {
        student->studentName = schoolName; student->studentRoll = schoolRoll; student->studentMarks = schoolMarks;
    }

    void display() {
        Student student;
        initialize(&student, "Asha", 12, 90);
        cout << student.studentName << ' ' << student.studentRoll << ' ' << student.studentMarks << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
