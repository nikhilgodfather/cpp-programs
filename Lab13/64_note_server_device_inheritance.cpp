#include <iostream>
#include <string>
using namespace std;

class Note {
protected:
    string schoolNote = "School network";
};
class Server : public Note {
protected:
    string schoolServer = "Library server";
};
class Device : public Server {
public:
    void display() const { cout << schoolNote << "\n" << schoolServer << "\nStudent device\n"; }
};

class SchoolLab {
public:
    void display() {
        Device schoolDevice; schoolDevice.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
