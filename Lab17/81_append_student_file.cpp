#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void append(const string &schoolPath, const string &studentRecord) {
        ofstream schoolFile(schoolPath, ios::app);
        if (!schoolFile) { cout << "Cannot open file\n"; return; }
        schoolFile << studentRecord << '\n'; schoolFile.close();
        ifstream schoolRead(schoolPath);
        cout << schoolRead.rdbuf();
    }

    void display() {
        if (!ifstream("student_append.txt")) ofstream("student_append.txt") << "Asha 90\n";
        append("student_append.txt", "Ravi 85");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
