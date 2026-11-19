#include <iostream>
#include <string>
using namespace std;

struct Student { string studentName; int studentMarks[3]; };

class SchoolLab {
public:
    void show(const Student &student) {
        cout << student.studentName << " marks: ";
        for (int studentMark : student.studentMarks) cout << studentMark << ' ';
        cout << '\n';
    }

    void display() {
        Student student{"Asha", {80, 90, 85}};
        show(student);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
