#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SchoolLab {
public:
    void calendar(int schoolStart, int schoolDays) {
        cout << "Sun Mon Tue Wed Thu Fri Sat\n" << string(schoolStart * 4, ' ');
        for (int schoolDay = 1; schoolDay <= schoolDays; ++schoolDay) {
            cout << setw(3) << schoolDay << ' ';
            if ((schoolStart + schoolDay) % 7 == 0) cout << '\n';
        }
        if ((schoolStart + schoolDays) % 7) cout << '\n';
    }

    void display() {
        int schoolStart, schoolDays;
        cout << "Enter starting day (0=Sun) and days: "; if (!(cin >> schoolStart >> schoolDays)) { cout << "Invalid input\n"; return; }
        if (schoolStart < 0 || schoolStart > 6 || schoolDays < 28 || schoolDays > 31) { cout << "Invalid month\n"; return; }
        calendar(schoolStart, schoolDays);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
