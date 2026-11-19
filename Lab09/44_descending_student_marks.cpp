#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string studentName;
    int studentRoll;
    double studentMarks;
};

class SchoolLab {
public:
    void show(vector<Student> schoolClass) {
        stable_sort(schoolClass.begin(), schoolClass.end(), [](const Student &studentFirst, const Student &studentSecond) { return studentFirst.studentMarks > studentSecond.studentMarks; });
        for (const Student &student : schoolClass) cout << student.studentName << ' ' << student.studentMarks << '\n';
    }

    void display() {
        vector<Student> schoolClass{{"Asha", 1, 85}, {"Ravi", 2, 95}, {"Neha", 3, 90}};
        show(schoolClass);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
