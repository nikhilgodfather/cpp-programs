#include <iostream>
using namespace std;

template<class SchoolType>
class Student {
    SchoolType studentMarks;
public:
    Student(SchoolType schoolMarks) : studentMarks(schoolMarks) {}
    void display() const { cout << "Marks: " << studentMarks << '\n'; }
};

class SchoolLab {
public:
    void display() {
        Student<int> student(90); Student<double> schoolStudent(88.5);
        student.display(); schoolStudent.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
