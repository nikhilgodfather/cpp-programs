#include <iostream>
using namespace std;

template<class StudentType, class SchoolType>
auto total(StudentType studentMarks, SchoolType schoolBonus) -> decltype(studentMarks + schoolBonus) { return studentMarks + schoolBonus; }

class SchoolLab {
public:
    void display() {
        cout << "Total: " << total(80, 5.5) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
