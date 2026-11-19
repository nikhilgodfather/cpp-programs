#include <iostream>
#include <string>
using namespace std;

class SchoolLab {
public:
    void printStars(int schoolCount) { cout << string(schoolCount, '*') << '\n'; }

    void display() {
        printStars(20);
    }
};

int main() {
    SchoolLab school;
    school.display();
}
