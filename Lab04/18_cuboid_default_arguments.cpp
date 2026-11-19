#include <iostream>
using namespace std;

class SchoolLab {
public:
    double volume(double schoolLength = 1, double schoolWidth = 1, double schoolHeight = 1) { return schoolLength * schoolWidth * schoolHeight; }

    void display() {
        cout << "Default volume: " << volume() << '\n';
        cout << "School cuboid volume: " << volume(5, 4, 3) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
