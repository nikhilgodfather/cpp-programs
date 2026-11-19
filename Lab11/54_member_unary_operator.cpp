#include <iostream>
using namespace std;

class StudentMarks {
    int studentMarks;
public:
    StudentMarks(int schoolMarks) : studentMarks(schoolMarks) {}
    StudentMarks operator-() const { return StudentMarks(-studentMarks); }
    void display() const { cout << "Marks: " << studentMarks << '\n'; }
};

class SchoolLab {
public:
    void display() {
        StudentMarks student(80);
        (-student).display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
