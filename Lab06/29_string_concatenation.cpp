#include <iostream>
#include <string>
using namespace std;

class SchoolLab {
public:
    string join(const string &studentName, const string &schoolName) { return studentName + schoolName; }

    void display() {
        string studentName, schoolName;
        cout << "Enter two strings:\n"; getline(cin, studentName); getline(cin, schoolName);
        cout << "Joined: " << join(studentName, schoolName) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
