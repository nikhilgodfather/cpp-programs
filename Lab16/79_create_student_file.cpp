#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class SchoolLab {
public:
    void write(const string &schoolPath) {
        ofstream schoolFile(schoolPath);
        if (!schoolFile) { cout << "Cannot create file\n"; return; }
        schoolFile << "Asha 90\nRavi 85\n";
        schoolFile.close();
        cout << "Created " << schoolPath << "\nWritten:\nAsha 90\nRavi 85\n";
    }

    void display() {
        write("student_create.txt");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
