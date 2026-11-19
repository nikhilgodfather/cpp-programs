#include <iostream>
using namespace std;

class SchoolMeters {
    double schoolMeters;
public:
    SchoolMeters(double studentMeters) : schoolMeters(studentMeters) {}
    double meters() const { return schoolMeters; }
};
class SchoolKilometers {
    double schoolKilometers;
public:
    SchoolKilometers(const SchoolMeters &studentDistance) : schoolKilometers(studentDistance.meters() / 1000) {}
    void display() const { cout << "Kilometers: " << schoolKilometers << '\n'; }
};

class SchoolLab {
public:
    void display() {
        SchoolMeters schoolDistance(1500);
        SchoolKilometers studentDistance = schoolDistance;
        studentDistance.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
