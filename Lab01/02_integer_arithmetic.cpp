#include <iostream>
using namespace std;

class SchoolLab {
public:
    void calculate(int studentMarks, int schoolMarks) {
        cout << "Sum: " << 1LL * studentMarks + schoolMarks << "\nDifference: " << 1LL * studentMarks - schoolMarks
             << "\nProduct: " << 1LL * studentMarks * schoolMarks << '\n';
        if (schoolMarks) cout << "Quotient: " << 1LL * studentMarks / schoolMarks << '\n';
        else cout << "Division by zero\n";
    }

    void display() {
        int studentMarks, schoolMarks;
        cout << "Enter two integers: "; if (!(cin >> studentMarks >> schoolMarks)) { cout << "Invalid input\n"; return; }
        calculate(studentMarks, schoolMarks);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
