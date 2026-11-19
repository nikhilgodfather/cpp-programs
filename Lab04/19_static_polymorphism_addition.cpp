#include <iostream>
using namespace std;

class SchoolLab {
public:
    int addMarks(int studentMarks, int schoolBonus) { return studentMarks + schoolBonus; }
    double addMarks(int studentMarks, double schoolBonus) { return studentMarks + schoolBonus; }

    void display() {
        cout << "Integer sum: " << addMarks(70, 20) << '\n';
        cout << "Mixed sum: " << addMarks(70, 20.5) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
