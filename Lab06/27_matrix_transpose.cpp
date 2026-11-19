#include <iostream>
using namespace std;

class SchoolLab {
public:
    void transpose(const int schoolMatrix[3][3]) {
        for (int schoolRow = 0; schoolRow < 3; ++schoolRow) {
            for (int schoolColumn = 0; schoolColumn < 3; ++schoolColumn) cout << schoolMatrix[schoolColumn][schoolRow] << ' ';
            cout << '\n';
        }
    }

    void display() {
        int schoolMatrix[3][3];
        cout << "Enter 3x3 matrix: ";
        for (auto &schoolRow : schoolMatrix) for (int &studentValue : schoolRow) if (!(cin >> studentValue)) { cout << "Invalid input\n"; return; }
        transpose(schoolMatrix);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
