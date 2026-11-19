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
    void show(const School &schoolRecord) { schoolRecord.display(); }

    void display() {
        School school; Student student;
        show(school); show(student);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
