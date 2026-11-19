#include <iostream>
#include <string>
using namespace std;

class Bill {
protected:
    double schoolAmount;
public:
    Bill(double studentAmount) : schoolAmount(studentAmount) {}
};
class Cash : public Bill {
public:
    Cash(double studentAmount) : Bill(studentAmount) {}
    void display() const { cout << "School cash payment: " << schoolAmount << '\n'; }
};
class Cheque : public Bill {
    string schoolCheque;
public:
    Cheque(double studentAmount, string studentCheque) : Bill(studentAmount), schoolCheque(studentCheque) {}
    void display() const { cout << "School cheque payment: " << schoolAmount << " Number: " << schoolCheque << '\n'; }
};

class SchoolLab {
public:
    void display() {
        Cash schoolCash(1200); Cheque schoolCheque(2500, "CH101");
        schoolCash.display(); schoolCheque.display();
    }
};

int main() {
    SchoolLab school;
    school.display();
}
