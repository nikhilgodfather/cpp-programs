#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class SchoolLab {
public:
    void sortNames(vector<string> studentNames) {
        sort(studentNames.begin(), studentNames.end());
        for (const string &studentName : studentNames) cout << studentName << '\n';
    }

    void display() {
        int schoolCount;
        cout << "Enter student count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) return;
        vector<string> studentNames(schoolCount);
        cout << "Enter names:\n";
        for (string &studentName : studentNames)
            if (!getline(cin >> ws, studentName)) { cout << "Invalid input\n"; return; }
        sortNames(studentNames);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
