#include <iostream>
using namespace std;

class SchoolLab {
public:
    bool leap(int schoolYear) { return schoolYear % 400 == 0 || (schoolYear % 4 == 0 && schoolYear % 100 != 0); }

    void display() {
        int schoolYear;
        cout << "Enter year: "; if (!(cin >> schoolYear)) { cout << "Invalid input\n"; return; }
        cout << (leap(schoolYear) ? "Leap year" : "Not a leap year") << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
