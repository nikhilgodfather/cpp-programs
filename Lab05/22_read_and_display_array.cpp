#include <iostream>
#include <vector>
using namespace std;

class SchoolLab {
public:
    void show(const vector<int> &studentMarks) { for (int studentMark : studentMarks) cout << studentMark << ' '; cout << '\n'; }

    void display() {
        int schoolCount;
        cout << "Enter count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) { cout << "Invalid count\n"; return; }
        vector<int> studentMarks(schoolCount);
        cout << "Enter marks: "; for (int &studentMark : studentMarks) if (!(cin >> studentMark)) { cout << "Invalid input\n"; return; }
        show(studentMarks);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
