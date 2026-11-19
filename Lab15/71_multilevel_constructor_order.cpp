#include <iostream>
using namespace std;

class School { public: School() { cout << "School constructor\n"; } };
class Student : public School { public: Student() { cout << "Student constructor\n"; } };
class StudentResult : public Student { public: StudentResult() { cout << "Result constructor\n"; } };

class SchoolLab {
public:
    void display() {
        StudentResult student;
    }
};

int main() {
    SchoolLab school;
    school.display();
}
