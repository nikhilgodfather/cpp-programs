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
    StudentComplex addComplex(const StudentComplex &studentFirst, const StudentComplex &studentSecond) {
        return {studentFirst.studentReal + studentSecond.studentReal, studentFirst.studentImaginary + studentSecond.studentImaginary};
    }

    void display() {
        StudentComplex studentFirst(3, 4), studentSecond(1, 2);
        StudentComplex studentTotal = addComplex(studentFirst, studentSecond);
        studentTotal.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
