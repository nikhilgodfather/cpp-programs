#include <iostream>
#include <stdexcept>
using namespace std;

class SchoolLab {
public:
    void validate(int studentMarks) {
        if (studentMarks < 0) throw invalid_argument("Negative student marks");
    }

    void display() {
        try { validate(-5); }
        catch (const invalid_argument &schoolError) { cout << schoolError.what() << '\n'; }
    }
};

int main() {
    SchoolLab school;
    school.display();
}
