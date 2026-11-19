#include <iostream>
#include <string>
using namespace std;

class School { protected: string schoolName = "Green School"; };
class Student : public School { public: void display() const { cout << schoolName << ": Student Asha\n"; } };
class Teacher : public School { public: void display() const { cout << schoolName << ": Teacher Meera\n"; } };

class SchoolLab {
public:
    void display() {
        Student student; Teacher schoolTeacher;
        student.display(); schoolTeacher.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
