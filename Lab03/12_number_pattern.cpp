#include <iostream>
using namespace std;

class SchoolLab {
public:
    void pattern(int schoolRows) {
        for (int studentRow = 1; studentRow <= schoolRows; ++studentRow) {
            for (int studentNumber = 1; studentNumber <= studentRow; ++studentNumber) cout << studentNumber;
            for (int studentNumber = studentRow - 1; studentNumber >= 1; --studentNumber) cout << studentNumber;
            cout << '\n';
        }
    }

    void display() {
        pattern(4);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
