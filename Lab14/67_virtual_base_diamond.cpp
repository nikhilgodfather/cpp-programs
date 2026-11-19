#include <iostream>
#include <string>
using namespace std;

class School { public: string schoolName = "Green School"; };
class Academic : virtual public School { protected: int studentMarks = 80; };
class Sports : virtual public School { protected: int studentScore = 10; };
class StudentResult : public Academic, public Sports {
public:
    void display() const { cout << schoolName << " Total: " << studentMarks + studentScore << '\n'; }
};

class SchoolLab {
public:
    void display() {
        StudentResult student;
        student.schoolName = "Central School"; student.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
