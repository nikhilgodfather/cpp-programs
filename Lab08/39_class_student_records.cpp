#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string studentName;
    int studentRoll;
    double studentMarks;
};

class SchoolLab {
public:
    void show(const vector<Student> &schoolClass) {
        for (const Student &student : schoolClass) cout << student.studentName << ' ' << student.studentRoll << ' ' << student.studentMarks << '\n';
    }

    void display() {
        int schoolCount;
        cout << "Enter student count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) return;
        vector<Student> schoolClass(schoolCount);
        cout << "Enter name, roll and marks:\n";
        for (Student &student : schoolClass) if (!(cin >> student.studentName >> student.studentRoll >> student.studentMarks)) { cout << "Invalid input\n"; return; }
        show(schoolClass);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
