#include <iostream>
#include <string>
using namespace std;

class School {
protected:
    string studentName;
public:
    School(string schoolName) : studentName(schoolName) {}
};
class Student : public School {
    int studentRoll;
public:
    Student(string schoolName, int schoolRoll) : School(schoolName), studentRoll(schoolRoll) {}
    void display() const { cout << studentName << ' ' << studentRoll << '\n'; }
};

class SchoolLab {
public:
    void display() {
        Student student("Asha", 12); student.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
