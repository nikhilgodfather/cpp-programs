#include <iostream>
using namespace std;

class School {
public:
    School() { cout << "School constructor\n"; }
    ~School() { cout << "School destructor\n"; }
};
class Student : public School {
public:
    Student() { cout << "Student constructor\n"; }
    ~Student() { cout << "Student destructor\n"; }
};

class SchoolLab {
public:
    void display() {
        Student student;
    }
};

int main() {
    SchoolLab school;
    school.display();
}
