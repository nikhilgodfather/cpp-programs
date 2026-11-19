#include <iostream>
#include <numeric>
using namespace std;

class SchoolLab {
public:
    void simplify(long long studentNumerator, long long schoolDenominator) {
        if (schoolDenominator == 0) { cout << "Invalid denominator\n"; return; }
        long long schoolFactor = gcd(studentNumerator, schoolDenominator);
        studentNumerator /= schoolFactor; schoolDenominator /= schoolFactor;
        if (schoolDenominator < 0) { studentNumerator = -studentNumerator; schoolDenominator = -schoolDenominator; }
        cout << studentNumerator << '/' << schoolDenominator << '\n';
    }

    void display() {
        int studentNumerator, schoolDenominator;
        cout << "Enter numerator and denominator: "; if (!(cin >> studentNumerator >> schoolDenominator)) { cout << "Invalid input\n"; return; }
        simplify(studentNumerator, schoolDenominator);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
