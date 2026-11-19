#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

class SchoolLab {
public:
    long long gcd(long long studentCount, long long schoolCount) { return schoolCount == 0 ? studentCount : gcd(schoolCount, studentCount % schoolCount); }

    void display() {
        int studentCount, schoolCount;
        cout << "Enter two numbers: "; if (!(cin >> studentCount >> schoolCount)) { cout << "Invalid input\n"; return; }
        cout << "GCD: " << gcd(abs(1LL * studentCount), abs(1LL * schoolCount)) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
