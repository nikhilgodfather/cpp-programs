#include <iostream>
using namespace std;

template<class SchoolType>
SchoolType total(SchoolType studentMarks, SchoolType schoolBonus) { return studentMarks + schoolBonus; }

class SchoolLab {
public:
    void display() {
        cout << "Integer total: " << total(70, 20) << '\n';
        cout << "Decimal total: " << total(70.5, 20.5) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
