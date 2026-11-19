#include <iostream>
#include <cctype>
using namespace std;

class SchoolLab {
public:
    char upper(char studentInitial) { return static_cast<char>(toupper(static_cast<unsigned char>(studentInitial))); }

    void display() {
        char studentInitial;
        cout << "Enter lowercase character: "; if (!(cin >> studentInitial)) { cout << "Invalid input\n"; return; }
        cout << "Uppercase: " << upper(studentInitial) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
