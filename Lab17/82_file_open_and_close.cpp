#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void openClose(const string &schoolPath) {
        fstream schoolFile;
        schoolFile.open(schoolPath, ios::out);
        if (!schoolFile) { cout << "Cannot open file\n"; return; }
        cout << "Output opened\n"; schoolFile << "Green School\n"; schoolFile.close();
        cout << "Output closed\n";
        schoolFile.open(schoolPath, ios::in);
        if (!schoolFile) { cout << "Cannot open file\n"; return; }
        cout << "Input opened\n";
        string schoolName; getline(schoolFile, schoolName); cout << schoolName << '\n';
        schoolFile.close(); cout << "Input closed\n";
    }

    void display() {
        openClose("school_stream.txt");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
