#include <iostream>
using namespace std;

class SchoolLab {
public:
    int largest(const int studentMarks[], int schoolCount) {
        int schoolLargest = studentMarks[0];
        for (int studentIndex = 1; studentIndex < schoolCount; ++studentIndex)
            schoolLargest = studentMarks[studentIndex] > schoolLargest ? studentMarks[studentIndex] : schoolLargest;
        return schoolLargest;
    }

    void display() {
        int studentMarks[10];
        cout << "Enter 10 marks: "; for (int &studentMark : studentMarks) if (!(cin >> studentMark)) { cout << "Invalid input\n"; return; }
        cout << "Largest: " << largest(studentMarks, 10) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
