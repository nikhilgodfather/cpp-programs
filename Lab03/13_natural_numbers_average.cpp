#include <iostream>
using namespace std;

class SchoolLab {
public:
    double average(int schoolCount) {
        double schoolSum = 0;
        for (int studentNumber = 1; studentNumber <= schoolCount; ++studentNumber) schoolSum += studentNumber;
        return schoolSum / schoolCount;
    }

    void display() {
        int schoolCount;
        cout << "Enter count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) { cout << "Invalid count\n"; return; }
        cout << "Average: " << average(schoolCount) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
