#include <iostream>
using namespace std;

class Academic { public: Academic() { cout << "Academic constructor\n"; } };
class Sports { public: Sports() { cout << "Sports constructor\n"; } };
class StudentResult : public Academic, public Sports { public: StudentResult() { cout << "Result constructor\n"; } };

class SchoolLab {
public:
    void display() {
        StudentResult student;
    }
};

int main() {
    SchoolLab school;
    school.display();
}
