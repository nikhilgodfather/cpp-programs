#include <iostream>
using namespace std;

class SchoolRecord {
public:
    virtual void display() const = 0;
    virtual ~SchoolRecord() = default;
};
class Student : public SchoolRecord {
    int studentMarks;
public:
    Student(int schoolMarks) : studentMarks(schoolMarks) {}
    void display() const override { cout << "Marks: " << studentMarks << '\n'; }
};

class SchoolLab {
public:
    void display() {
        Student student(90); SchoolRecord &schoolRecord = student;
        schoolRecord.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
