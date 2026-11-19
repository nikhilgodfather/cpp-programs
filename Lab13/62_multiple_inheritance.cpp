#include <iostream>
using namespace std;

class Academic { protected: int studentMarks; public: Academic(int schoolMarks) : studentMarks(schoolMarks) {} };
class Sports { protected: int studentScore; public: Sports(int schoolScore) : studentScore(schoolScore) {} };
class StudentResult : public Academic, public Sports {
public:
    StudentResult(int schoolMarks, int schoolScore) : Academic(schoolMarks), Sports(schoolScore) {}
    void display() const { cout << "Total: " << studentMarks + studentScore << '\n'; }
};

class SchoolLab {
public:
    void display() {
        StudentResult student(80, 10); student.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
