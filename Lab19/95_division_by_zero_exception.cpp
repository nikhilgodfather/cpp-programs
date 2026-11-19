#include <iostream>
#include <stdexcept>
using namespace std;

class SchoolLab {
public:
    double divide(double schoolTotal, double studentCount) {
        if (studentCount == 0) throw runtime_error("Division by zero");
        return schoolTotal / studentCount;
    }

    void display() {
        double schoolTotal, studentCount;
        cout << "Enter total and divisor: "; if (!(cin >> schoolTotal >> studentCount)) { cout << "Invalid input\n"; return; }
        try { double schoolAverage = divide(schoolTotal, studentCount); cout << "Result: " << schoolAverage << '\n'; }
        catch (const runtime_error &schoolError) { cout << schoolError.what() << '\n'; }
    }
};

int main() {
    SchoolLab school;
    school.display();
}
