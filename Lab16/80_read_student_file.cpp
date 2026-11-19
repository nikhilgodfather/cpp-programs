#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void read(const string &schoolPath) {
        ifstream schoolFile(schoolPath);
        if (!schoolFile) { cout << "Cannot open file\n"; return; }
        string studentLine;
        while (getline(schoolFile, studentLine)) cout << studentLine << '\n';
    }

    void display() {
        if (!ifstream("student_read.txt")) ofstream("student_read.txt") << "Asha 90\nRavi 85\n";
        read("student_read.txt");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
