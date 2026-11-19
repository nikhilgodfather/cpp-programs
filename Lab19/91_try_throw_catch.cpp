#include <iostream>
#include <stdexcept>
using namespace std;

class SchoolLab {
public:
    void display() {
        int studentMarks;
        cout << "Enter marks: "; if (!(cin >> studentMarks)) { cout << "Invalid input\n"; return; }
        try {
            if (studentMarks < 0 || studentMarks > 100) throw out_of_range("Marks must be 0 to 100");
            cout << "Marks: " << studentMarks << '\n';
        } catch (const out_of_range &schoolError) { cout << schoolError.what() << '\n'; }
    }
};

int main() {
    SchoolLab school;
    school.display();
}
