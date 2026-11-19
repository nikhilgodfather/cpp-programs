#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void positions(const string &schoolPath) {
        fstream schoolFile(schoolPath, ios::in | ios::out | ios::trunc | ios::binary);
        if (!schoolFile) { cout << "Cannot open file\n"; return; }
        schoolFile << "Asha 90";
        cout << "tellp: " << schoolFile.tellp() << '\n';
        schoolFile.seekp(5); schoolFile << "95"; schoolFile.flush();
        schoolFile.seekg(0); cout << "tellg: " << schoolFile.tellg() << '\n';
        string studentRecord; getline(schoolFile, studentRecord); cout << studentRecord << '\n';
    }

    void display() {
        positions("school_positions.txt");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
