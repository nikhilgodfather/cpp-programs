#include <iostream>
using namespace std;

class SchoolLab {
public:
    int total(int studentEnglish, int studentMath) { return studentEnglish + studentMath; }
    int total(int studentEnglish, int studentMath, int studentScience) { return studentEnglish + studentMath + studentScience; }

    void display() {
        cout << "Two subjects: " << total(70, 80) << '\n';
        cout << "Three subjects: " << total(70, 80, 90) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
