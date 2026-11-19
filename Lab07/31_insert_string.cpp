#include <iostream>
#include <string>
using namespace std;

class SchoolLab {
public:
    void insert(string schoolText, const string &studentText, size_t schoolPosition) {
        if (schoolPosition > schoolText.size()) { cout << "Invalid position\n"; return; }
        cout << schoolText.insert(schoolPosition, studentText) << '\n';
    }

    void display() {
        string schoolText, studentText; size_t schoolPosition;
        cout << "Enter main text and inserted text:\n"; getline(cin, schoolText); getline(cin, studentText);
        cout << "Enter position (0-based): "; if (!(cin >> schoolPosition)) { cout << "Invalid input\n"; return; }
        insert(schoolText, studentText, schoolPosition);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
