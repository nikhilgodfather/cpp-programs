#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SchoolLab {
public:
    void second(vector<int> studentMarks) {
        sort(studentMarks.begin(), studentMarks.end());
        studentMarks.erase(unique(studentMarks.begin(), studentMarks.end()), studentMarks.end());
        if (studentMarks.size() < 2) cout << "No distinct second largest\n";
        else cout << "Second largest: " << studentMarks[studentMarks.size() - 2] << '\n';
    }

    void display() {
        int schoolCount;
        cout << "Enter count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) { cout << "Invalid count\n"; return; }
        vector<int> studentMarks(schoolCount);
        cout << "Enter marks: "; for (int &studentMark : studentMarks) if (!(cin >> studentMark)) { cout << "Invalid input\n"; return; }
        second(studentMarks);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
