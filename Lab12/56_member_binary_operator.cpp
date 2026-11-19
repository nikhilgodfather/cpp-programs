#include <iostream>
using namespace std;

class StudentMarks {
    int studentMarks;
public:
    StudentMarks(int schoolMarks) : studentMarks(schoolMarks) {}
    StudentMarks operator+(const StudentMarks &student) const { return StudentMarks(studentMarks + student.studentMarks); }
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
