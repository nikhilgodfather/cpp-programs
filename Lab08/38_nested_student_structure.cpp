#include <iostream>
#include <string>
using namespace std;

struct Address { string schoolCity; };
struct Student { string studentName; int studentRoll; Address schoolAddress; };

class SchoolLab {
public:
    void show(const Student &student) { cout << student.studentName << " " << student.studentRoll << " " << student.schoolAddress.schoolCity << '\n'; }

    void display() {
        Student student;
        cout << "Enter name, roll, city: ";
        if (!(cin >> student.studentName >> student.studentRoll >> student.schoolAddress.schoolCity)) { cout << "Invalid input\n"; return; }
        show(student);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
