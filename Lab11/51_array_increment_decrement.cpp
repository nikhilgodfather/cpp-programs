#include <iostream>
#include <vector>
using namespace std;

class StudentArray {
    vector<int> studentMarks;
public:
    StudentArray(vector<int> schoolMarks) : studentMarks(schoolMarks) {}
    StudentArray &operator++() { for (int &studentMark : studentMarks) ++studentMark; return *this; }
    StudentArray &operator--() { for (int &studentMark : studentMarks) --studentMark; return *this; }
    void display() const { for (int studentMark : studentMarks) cout << studentMark << ' '; cout << '\n'; }
};

class SchoolLab {
public:
    void display() {
        StudentArray student({70, 80, 90});
        ++student; cout << "Incremented: "; student.display();
        --student; cout << "Decremented: "; student.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
