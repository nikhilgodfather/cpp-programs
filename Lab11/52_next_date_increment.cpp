#include <iostream>
using namespace std;

class SchoolDate {
    int schoolDay, schoolMonth, schoolYear;
public:
    SchoolDate(int studentDay, int studentMonth, int studentYear) : schoolDay(studentDay), schoolMonth(studentMonth), schoolYear(studentYear) {}
    SchoolDate &operator++() {
        int schoolDays[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (schoolYear % 400 == 0 || (schoolYear % 4 == 0 && schoolYear % 100 != 0)) schoolDays[1] = 29;
        if (++schoolDay > schoolDays[schoolMonth - 1]) { schoolDay = 1; if (++schoolMonth > 12) { schoolMonth = 1; ++schoolYear; } }
        return *this;
    }
    void display() const { cout << schoolDay << '/' << schoolMonth << '/' << schoolYear << '\n'; }
};

class SchoolLab {
public:
    void display() {
        SchoolDate schoolDate(28, 2, 2024);
        ++schoolDate; schoolDate.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
