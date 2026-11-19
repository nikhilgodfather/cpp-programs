#include <iostream>
#include <vector>
using namespace std;

class SchoolLab {
public:
    int search(const vector<int> &studentMarks, int studentTarget) {
        for (size_t studentIndex = 0; studentIndex < studentMarks.size(); ++studentIndex)
            if (studentMarks[studentIndex] == studentTarget) return static_cast<int>(studentIndex);
        return -1;
    }

    void display() {
        int schoolCount;
        cout << "Enter count: "; if (!(cin >> schoolCount)) { cout << "Invalid input\n"; return; }
        if (schoolCount <= 0) { cout << "Invalid count\n"; return; }
        vector<int> studentMarks(schoolCount);
        cout << "Enter marks: "; for (int &studentMark : studentMarks) if (!(cin >> studentMark)) { cout << "Invalid input\n"; return; }
        int studentTarget;
        cout << "Enter mark to search: "; if (!(cin >> studentTarget)) { cout << "Invalid input\n"; return; }
        cout << "Index (0-based, -1 if absent): " << search(studentMarks, studentTarget) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
