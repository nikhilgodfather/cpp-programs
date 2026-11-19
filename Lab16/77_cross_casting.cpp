#include <iostream>
using namespace std;

class Academic { public: virtual ~Academic() = default; };
class Sports { public: virtual void display() const { cout << "School sports\n"; } virtual ~Sports() = default; };
class Student : public Academic, public Sports { public: void display() const override { cout << "Student sports score: 10\n"; } };

class SchoolLab {
public:
    void display() {
        Student student;
        Academic *schoolAcademic = &student;
        Sports *schoolSports = dynamic_cast<Sports *>(schoolAcademic);
        if (schoolSports) schoolSports->display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
