#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class SchoolLab {
public:
    void show(const vector<string> &schoolLines, int schoolStart, int schoolCount) {
        if (schoolStart < 1 || schoolCount < 0 || schoolStart - 1 > static_cast<int>(schoolLines.size()) - schoolCount) {
            cout << "Invalid range\n"; return;
        }
        for (int schoolLine = schoolStart - 1; schoolLine < schoolStart - 1 + schoolCount; ++schoolLine) cout << schoolLines[schoolLine] << '\n';
    }

    void display() {
        int schoolTotal, schoolStart, schoolCount;
        cout << "Enter total lines: "; if (!(cin >> schoolTotal)) { cout << "Invalid input\n"; return; }
        if (schoolTotal < 0) return;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        vector<string> schoolLines(schoolTotal);
        cout << "Enter text:\n"; for (string &schoolLine : schoolLines) getline(cin, schoolLine);
        cout << "Enter starting line (1-based) and count: "; if (!(cin >> schoolStart >> schoolCount)) { cout << "Invalid input\n"; return; }
        show(schoolLines, schoolStart, schoolCount);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
