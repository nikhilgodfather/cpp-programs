#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class SchoolLab {
public:
    void check(const string &studentInput) {
        try {
            size_t schoolUsed;
            int studentMarks = stoi(studentInput, &schoolUsed);
            if (schoolUsed != studentInput.size()) throw invalid_argument("Invalid marks");
            if (studentMarks < 0 || studentMarks > 100) throw out_of_range("Marks out of range");
            cout << "Marks: " << studentMarks << '\n';
        } catch (const invalid_argument &) { cout << "Invalid marks\n"; }
          catch (const out_of_range &) { cout << "Marks out of range\n"; }
    }

    void display() {
        check("80"); check("abc"); check("120");
    }
};

int main() {
    SchoolLab school;
    school.display();
}
