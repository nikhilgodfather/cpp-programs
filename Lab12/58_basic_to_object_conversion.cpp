#include <iostream>
using namespace std;

class SchoolDistance {
    double schoolMeters;
public:
    SchoolDistance(double studentMeters) : schoolMeters(studentMeters) {}
    operator double() const { return schoolMeters; }
    void display() const { cout << "Meters: " << schoolMeters << '\n'; }
};

class SchoolLab {
public:
    void display() {
        SchoolDistance schoolDistance = 50.5;
        schoolDistance.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
