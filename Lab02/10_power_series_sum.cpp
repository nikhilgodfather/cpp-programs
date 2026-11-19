#include <iostream>
#include <cmath>
using namespace std;

class SchoolLab {
public:
    double sum(int schoolTerms) {
        double schoolSum = 0;
        for (int studentTerm = 1; studentTerm <= schoolTerms; ++studentTerm)
            schoolSum += pow(studentTerm, studentTerm) / studentTerm;
        return schoolSum;
    }

    void display() {
        int schoolTerms;
        cout << "Enter number of terms: "; if (!(cin >> schoolTerms)) { cout << "Invalid input\n"; return; }
        cout << "Sum: " << sum(schoolTerms) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
