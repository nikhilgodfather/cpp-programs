#include <iostream>
using namespace std;

class School {
private:
    int schoolSecret = 30;
protected:
    int schoolMarks = 80;
public:
    int schoolCode = 10;
    int secret() const { return schoolSecret; }
};
class PublicStudent : public School {
public:
    void display() const { cout << "Public inheritance: " << schoolCode << ' ' << schoolMarks << ' ' << secret() << '\n'; }
};
class ProtectedStudent : protected School {
public:
    void display() const { cout << "Protected inheritance: " << schoolCode << ' ' << schoolMarks << ' ' << secret() << '\n'; }
};
class PrivateStudent : private School {
public:
    void display() const { cout << "Private inheritance: " << schoolCode << ' ' << schoolMarks << ' ' << secret() << '\n'; }
};

class SchoolLab {
public:
    void display() {
        PublicStudent student; ProtectedStudent schoolMonitor; PrivateStudent schoolPrefect;
        cout << "Public access: " << student.schoolCode << '\n';
        student.display(); schoolMonitor.display(); schoolPrefect.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
