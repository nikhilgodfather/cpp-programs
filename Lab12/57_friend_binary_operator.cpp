#include <iostream>
using namespace std;

class StudentMarks {
    int studentMarks;
public:
    StudentMarks(int schoolMarks) : studentMarks(schoolMarks) {}
    friend StudentMarks operator+(const StudentMarks &studentFirst, const StudentMarks &studentSecond) { return StudentMarks(studentFirst.studentMarks + studentSecond.studentMarks); }
    void display() const { cout << "Marks: " << studentMarks << '\n'; }
};

class SchoolLab {
public:
    void display() {
        StudentMarks student(80), schoolBonus(5);
        (student + schoolBonus).display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
