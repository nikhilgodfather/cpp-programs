#include <iostream>
#include <cmath>
using namespace std;

class StudentComplex {
public:
    double studentReal, studentImaginary;
    StudentComplex(double schoolReal = 0, double schoolImaginary = 0) : studentReal(schoolReal), studentImaginary(schoolImaginary) {}
    void display() const { cout << studentReal << (studentImaginary < 0 ? " - " : " + ") << abs(studentImaginary) << "i\n"; }
};

class SchoolLab {
public:
    StudentComplex combine(const StudentComplex &studentFirst, const StudentComplex &studentSecond, int schoolSign) {
        return {studentFirst.studentReal + schoolSign * studentSecond.studentReal, studentFirst.studentImaginary + schoolSign * studentSecond.studentImaginary};
    }

    void display() {
        StudentComplex studentFirst, studentSecond;
        cout << "Enter real and imaginary parts of two numbers: ";
        if (!(cin >> studentFirst.studentReal >> studentFirst.studentImaginary >> studentSecond.studentReal >> studentSecond.studentImaginary)) { cout << "Invalid input\n"; return; }
        cout << "First: "; studentFirst.display(); cout << "Second: "; studentSecond.display();
        cout << "Sum: "; combine(studentFirst, studentSecond, 1).display();
        cout << "Difference: "; combine(studentFirst, studentSecond, -1).display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
