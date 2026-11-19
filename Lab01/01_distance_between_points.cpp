#include <iostream>
#include <cmath>
using namespace std;

class SchoolLab {
public:
    double distance(double schoolX, double schoolY, double studentX, double studentY) {
        double studentHorizontal = studentX - schoolX;
        double studentVertical = studentY - schoolY;
        return sqrt(studentHorizontal * studentHorizontal + studentVertical * studentVertical);
    }

    void display() {
        double schoolX, schoolY, studentX, studentY;
        cout << "Enter two points: ";
        if (!(cin >> schoolX >> schoolY >> studentX >> studentY)) { cout << "Invalid input\n"; return; }
        cout << "Distance: " << distance(schoolX, schoolY, studentX, studentY) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
