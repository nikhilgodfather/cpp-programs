#include <iostream>
#include <cmath>
using namespace std;

class SchoolLab {
public:
    double area(double schoolRadius) { return acos(-1.0) * schoolRadius * schoolRadius; }

    void display() {
        double schoolRadius;
        cout << "Enter radius: "; if (!(cin >> schoolRadius)) { cout << "Invalid input\n"; return; }
        cout << "Area: " << area(schoolRadius) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
