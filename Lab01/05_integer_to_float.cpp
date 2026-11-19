#include <iostream>
#include <iomanip>
using namespace std;

class SchoolLab {
public:
    float convert(int studentMarks) { return static_cast<float>(studentMarks); }

    void display() {
        int studentMarks;
        cout << "Enter an integer: "; if (!(cin >> studentMarks)) { cout << "Invalid input\n"; return; }
        cout << fixed << setprecision(2) << "Float: " << convert(studentMarks) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
