#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class StudentArray {
    vector<int> studentMarks;
public:
    StudentArray(vector<int> schoolMarks) : studentMarks(schoolMarks) {}
    friend StudentArray operator+(const StudentArray &studentFirst, const StudentArray &studentSecond) {
        vector<int> schoolTotal = studentFirst.studentMarks;
        if (schoolTotal.size() != studentSecond.studentMarks.size()) throw invalid_argument("Unequal sizes");
        for (size_t studentIndex = 0; studentIndex < schoolTotal.size(); ++studentIndex) schoolTotal[studentIndex] += studentSecond.studentMarks[studentIndex];
        return StudentArray(schoolTotal);
    }
    void display() const { for (int studentMark : studentMarks) cout << studentMark << ' '; cout << '\n'; }
};

class SchoolLab {
public:
    void display() {
        StudentArray studentFirst({10, 20, 30}), studentSecond({1, 2, 3});
        (studentFirst + studentSecond).display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
