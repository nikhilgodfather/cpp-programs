#include <iostream>
using namespace std;

class SchoolLab {
public:
    void addVectors(const int studentVector[], const int schoolVector[], int schoolSize) {
        for (int studentIndex = 0; studentIndex < schoolSize; ++studentIndex) cout << studentVector[studentIndex] + schoolVector[studentIndex] << ' ';
        cout << '\n';
    }

    void display() {
        int studentVector[]{1, 2, 3}, schoolVector[]{4, 5, 6};
        addVectors(studentVector, schoolVector, 3);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
