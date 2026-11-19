#include <iostream>
using namespace std;

template<class SchoolType>
class Student {
    SchoolType studentMarks;
public:
    Student(SchoolType schoolMarks) : studentMarks(schoolMarks) {}
    friend void show(const Student &student) { cout << "Marks: " << student.studentMarks << '\n'; }
};

class SchoolLab {
public:
    void display() {
        Student<double> student(88.5); show(student);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
