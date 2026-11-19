#include <iostream>
using namespace std;

class SchoolLab {
public:
    void pattern(int schoolRows) {
        for (int studentRow = 1; studentRow <= schoolRows; ++studentRow) {
            for (int studentColumn = 0; studentColumn < studentRow; ++studentColumn) cout << char('A' + studentColumn);
            cout << '\n';
        }
    }

    void display() {
        pattern(5);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
