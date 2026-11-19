#include <iostream>
using namespace std;

class SchoolLab {
public:
    void swapMarks(int &studentMarks, int &schoolMarks) {
        int temporaryMarks = studentMarks;
        studentMarks = schoolMarks;
        schoolMarks = temporaryMarks;
    }

    void display() {
        int studentMarks, schoolMarks;
        cout << "Enter two numbers: "; if (!(cin >> studentMarks >> schoolMarks)) { cout << "Invalid input\n"; return; }
        swapMarks(studentMarks, schoolMarks);
        cout << "After swap: " << studentMarks << ' ' << schoolMarks << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
