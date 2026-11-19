#include <iostream>
using namespace std;

class SchoolLab {
public:
    void display() {
        try { throw 12; }
        catch (...) { cout << "Student record exception caught\n"; }
    }
};

int main() {
    SchoolLab school;
    school.display();
}
