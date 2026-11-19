#include <iostream>
#include <string>
using namespace std;

class SchoolLab {
public:
    void compare(const string &studentName, const string &schoolName) {
        cout << (studentName == schoolName ? "Equal" : studentName < schoolName ? "First comes before second" : "First comes after second") << '\n';
    }

    void display() {
        string studentName, schoolName;
        cout << "Enter two strings:\n"; getline(cin, studentName); getline(cin, schoolName);
        compare(studentName, schoolName);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
