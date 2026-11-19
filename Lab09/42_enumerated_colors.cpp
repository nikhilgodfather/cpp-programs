#include <iostream>
#include <string>
using namespace std;

enum Color { Red, Orange, Yellow, Green, Blue, Indigo, Violet };

class SchoolLab {
public:
    void show(Color schoolColor) {
        const string schoolColors[]{"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};
        cout << schoolColors[schoolColor] << '\n';
    }

    void display() {
        for (int schoolColor = Red; schoolColor <= Violet; ++schoolColor) show(static_cast<Color>(schoolColor));
    }
};

int main() {
    SchoolLab school;
    school.display();
}
