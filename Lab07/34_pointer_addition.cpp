#include <iostream>
using namespace std;

class SchoolLab {
public:
    int addMarks(const int *studentMarks, const int *schoolBonus) { return *studentMarks + *schoolBonus; }

    void display() {
        int studentMarks = 75, schoolBonus = 5;
        cout << "Sum: " << addMarks(&studentMarks, &schoolBonus) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
