#include <iostream>
#include <vector>
using namespace std;

class SchoolLab {
public:
    void mergeMarks(vector<int> &studentMarks, const vector<int> &schoolMarks) { studentMarks.insert(studentMarks.end(), schoolMarks.begin(), schoolMarks.end()); }

    void display() {
        vector<int> studentMarks{80, 60, 90}, schoolMarks{75, 55};
        mergeMarks(studentMarks, schoolMarks);
        for (int studentMark : studentMarks) cout << studentMark << ' ';
        cout << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
