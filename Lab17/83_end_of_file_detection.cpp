#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void read(const string &schoolPath) {
        ifstream schoolFile(schoolPath);
        if (!schoolFile) { cout << "Cannot open file\n"; return; }
        string studentName;
        while (getline(schoolFile, studentName)) cout << studentName << '\n';
        if (schoolFile.eof()) cout << "End of file reached\n";
        else cout << "File read error\n";
    }

    void display() {
        ofstream("school_eof.txt") << "Asha\nRavi\n";
        read("school_eof.txt");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
