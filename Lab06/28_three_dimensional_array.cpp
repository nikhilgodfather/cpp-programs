#include <iostream>
using namespace std;

class SchoolLab {
public:
    void show(const int schoolArray[2][2][2]) {
        for (int schoolLayer = 0; schoolLayer < 2; ++schoolLayer) {
            cout << "Layer " << schoolLayer + 1 << '\n';
            for (int schoolRow = 0; schoolRow < 2; ++schoolRow) {
                for (int schoolColumn = 0; schoolColumn < 2; ++schoolColumn) cout << schoolArray[schoolLayer][schoolRow][schoolColumn] << ' ';
                cout << '\n';
            }
        }
    }

    void display() {
        int schoolArray[2][2][2];
        cout << "Enter 8 values: ";
        for (auto &schoolLayer : schoolArray) for (auto &schoolRow : schoolLayer) for (int &studentValue : schoolRow) if (!(cin >> studentValue)) { cout << "Invalid input\n"; return; }
        show(schoolArray);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
