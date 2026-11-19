#include <iostream>
using namespace std;

class SchoolLab {
public:
    bool prime(int studentNumber) {
        for (int studentDivisor = 2; studentDivisor <= studentNumber / studentDivisor; ++studentDivisor)
            if (studentNumber % studentDivisor == 0) return false;
        return true;
    }

    void display() {
        int studentNumber;
        cout << "Enter number: "; if (!(cin >> studentNumber)) { cout << "Invalid input\n"; return; }
        if (studentNumber < 2) cout << "Neither prime nor composite\n";
        else cout << (prime(studentNumber) ? "Prime" : "Composite") << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
