#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class SchoolLab {
public:
    void copyName(const string &studentName) {
        char *schoolCopy = new char[studentName.size() + 1];
        copy(studentName.begin(), studentName.end(), schoolCopy);
        schoolCopy[studentName.size()] = '\0';
        cout << "Copied: " << schoolCopy << '\n';
        delete[] schoolCopy;
    }

    void display() {
        string studentName;
        cout << "Enter student name: "; getline(cin, studentName);
        copyName(studentName);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
