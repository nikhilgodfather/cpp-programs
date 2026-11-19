#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class SchoolLab {
public:
    int readMarks() {
        string studentInput;
        if (!getline(cin, studentInput)) throw invalid_argument("Invalid input");
        size_t schoolUsed;
        int studentMarks;
        try { studentMarks = stoi(studentInput, &schoolUsed); }
        catch (const exception &) { throw invalid_argument("Invalid input"); }
        if (schoolUsed != studentInput.size()) throw invalid_argument("Invalid input");
        if (studentMarks < 0 || studentMarks > 100) throw out_of_range("Marks must be 0 to 100");
        return studentMarks;
    }

    void display() {
        cout << "Enter student marks (0-100): ";
        try { int studentMarks = readMarks(); cout << "Valid marks: " << studentMarks << '\n'; }
        catch (const exception &schoolError) { cout << schoolError.what() << '\n'; }
    }
};

int main() {
    SchoolLab school;
    school.display();
}
