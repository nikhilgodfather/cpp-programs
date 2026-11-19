#include <iostream>
#include <cstddef>
using namespace std;

class SchoolLab {
public:
    void display() {
        cout << "Sizes in bytes\n";
        cout << "bool: " << sizeof(bool) << "\nchar: " << sizeof(char)
             << "\nsigned char: " << sizeof(signed char) << "\nunsigned char: " << sizeof(unsigned char)
             << "\nwchar_t: " << sizeof(wchar_t) << "\nchar16_t: " << sizeof(char16_t)
             << "\nchar32_t: " << sizeof(char32_t) << "\nshort: " << sizeof(short)
             << "\nunsigned short: " << sizeof(unsigned short) << "\nint: " << sizeof(int)
             << "\nunsigned int: " << sizeof(unsigned int) << "\nlong: " << sizeof(long)
             << "\nunsigned long: " << sizeof(unsigned long) << "\nlong long: " << sizeof(long long)
             << "\nunsigned long long: " << sizeof(unsigned long long) << "\nfloat: " << sizeof(float)
             << "\ndouble: " << sizeof(double) << "\nlong double: " << sizeof(long double)
             << "\nnullptr_t: " << sizeof(nullptr_t) << '\n';
    }
};

int main() {
    SchoolLab school;
    school.display();
}
