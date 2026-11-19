#include <iostream>
#include <memory>
using namespace std;

class StudentArray {
    int schoolCount;
    unique_ptr<int[]> studentMarks;
public:
    StudentArray(int schoolSize) : schoolCount(schoolSize), studentMarks(new int[schoolSize]{}) {}
    void read() { for (int studentIndex = 0; studentIndex < schoolCount; ++studentIndex) if (!(cin >> studentMarks[studentIndex])) { cout << "Invalid input\n"; return; } }
    void display() const {
        int schoolEven = 0;
        for (int studentIndex = 0; studentIndex < schoolCount; ++studentIndex) if (studentMarks[studentIndex] % 2 == 0) ++schoolEven;
        cout << "Even: " << schoolEven << "\nOdd: " << schoolCount - schoolEven << '\n';
    }
};

class SchoolLab {
public:
    void display() {
        StudentArray studentMarks(5);
        cout << "Enter 5 marks: "; studentMarks.read(); studentMarks.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
