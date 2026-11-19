#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void modes(const string &schoolPath) {
        ofstream schoolWrite(schoolPath, ios::out | ios::trunc);
        if (!schoolWrite) { cout << "Cannot open file\n"; return; }
        schoolWrite << "Asha\n"; schoolWrite.close();
        ofstream schoolAppend(schoolPath, ios::app);
        if (!schoolAppend) { cout << "Cannot open file\n"; return; }
        schoolAppend << "Ravi\n"; schoolAppend.close();
        fstream schoolRead(schoolPath, ios::in | ios::out | ios::binary | ios::ate);
        if (!schoolRead) { cout << "Cannot open file\n"; return; }
        cout << "End position: " << schoolRead.tellg() << '\n';
        schoolRead.seekg(0); cout << schoolRead.rdbuf();
        schoolRead.close();
        cout << "Modes: in out app trunc binary ate\n";
    }

    void display() {
        modes("school_modes.txt");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
