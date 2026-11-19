#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SchoolLab {
public:
    void interchange(vector<int> &studentMarks) { iter_swap(min_element(studentMarks.begin(), studentMarks.end()), max_element(studentMarks.begin(), studentMarks.end())); }

    void display() {
        int schoolCount;
        cout << "Enter count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) { cout << "Invalid count\n"; return; }
        vector<int> studentMarks(schoolCount);
        cout << "Enter marks: "; for (int &studentMark : studentMarks) if (!(cin >> studentMark)) { cout << "Invalid input\n"; return; }
        interchange(studentMarks);
        for (int studentMark : studentMarks) cout << studentMark << ' ';
        cout << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
