#include <iostream>
using namespace std;

class SchoolMarks;
class StudentMarks {
    double studentMarks;
public:
    StudentMarks(double schoolMarks) : studentMarks(schoolMarks) {}
    friend double mean(const StudentMarks &, const SchoolMarks &);
};
class SchoolMarks {
    double schoolMarks;
public:
    SchoolMarks(double studentMarks) : schoolMarks(studentMarks) {}
    friend double mean(const StudentMarks &, const SchoolMarks &);
};
double mean(const StudentMarks &student, const SchoolMarks &school) { return (student.studentMarks + school.schoolMarks) / 2; }

class SchoolLab {
public:
    void display() {
        StudentMarks student(80); SchoolMarks school(90);
        cout << "Mean: " << mean(student, school) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
