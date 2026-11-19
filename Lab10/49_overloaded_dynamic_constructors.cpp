#include <iostream>
#include <algorithm>
#include <memory>
using namespace std;

class StudentArray {
    int schoolCount;
    unique_ptr<int[]> studentMarks;
public:
    StudentArray() : schoolCount(1), studentMarks(new int[1]{0}) {}
    StudentArray(int schoolSize) : schoolCount(schoolSize), studentMarks(new int[schoolSize]{}) {}
    void read() { for (int studentIndex = 0; studentIndex < schoolCount; ++studentIndex) if (!(cin >> studentMarks[studentIndex])) { cout << "Invalid input\n"; return; } }
    int largest() const { return *max_element(studentMarks.get(), studentMarks.get() + schoolCount); }
};

class SchoolLab {
public:
    void display() {
        StudentArray studentDefault;
        StudentArray studentMarks(3);
        cout << "Enter 3 marks: "; studentMarks.read();
        cout << "Default largest: " << studentDefault.largest() << "\nLargest: " << studentMarks.largest() << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
