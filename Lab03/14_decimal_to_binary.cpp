#include <iostream>
#include <string>
using namespace std;

class SchoolLab {
public:
    string binary(long long studentNumber) {
        bool studentNegative = studentNumber < 0;
        unsigned long long studentValue = studentNegative ? 0ULL - studentNumber : studentNumber;
        string studentBinary;
        do { studentBinary = char('0' + studentValue % 2) + studentBinary; studentValue /= 2; } while (studentValue);
        return (studentNegative ? "-" : "") + studentBinary;
    }

    void display() {
        long long studentNumber;
        cout << "Enter decimal integer: "; if (!(cin >> studentNumber)) { cout << "Invalid input\n"; return; }
        cout << "Binary: " << binary(studentNumber) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
