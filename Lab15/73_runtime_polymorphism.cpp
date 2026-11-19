#include <iostream>
using namespace std;

class School {
public:
    virtual void display() const { cout << "School record\n"; }
    virtual ~School() = default;
};
class Student : public School {
public:
    void display() const override { cout << "Student record: Asha\n"; }
};

class SchoolLab {
public:
    void display() {
        Student student; School *schoolRecord = &student;
        schoolRecord->display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
