#include <iostream>
using namespace std;

class SchoolLab {
public:
    double power(double studentBase, int schoolExponent) {
        if (schoolExponent == 0) return 1;
        double schoolHalf = power(studentBase, schoolExponent / 2);
        double schoolPower = schoolHalf * schoolHalf;
        if (schoolExponent % 2 == 0) return schoolPower;
        return schoolExponent > 0 ? schoolPower * studentBase : schoolPower / studentBase;
    }

    void display() {
        double studentBase; int schoolExponent;
        cout << "Enter base and exponent: "; if (!(cin >> studentBase >> schoolExponent)) { cout << "Invalid input\n"; return; }
        if (studentBase == 0 && schoolExponent < 0) { cout << "Undefined power\n"; return; }
        cout << "Power: " << power(studentBase, schoolExponent) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
