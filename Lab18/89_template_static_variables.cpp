#include <iostream>
using namespace std;

template<class SchoolType>
class Student {
public:
    static int schoolCount;
    Student() { ++schoolCount; }
};
template<class SchoolType> int Student<SchoolType>::schoolCount = 0;

class SchoolLab {
public:
    void display() {
        Student<int> studentFirst, studentSecond;
        Student<double> schoolStudent;
        cout << "Integer objects: " << Student<int>::schoolCount << '\n';
        cout << "Double objects: " << Student<double>::schoolCount << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
