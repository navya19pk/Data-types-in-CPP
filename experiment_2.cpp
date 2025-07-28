// Navya Pawan Khajuria
// 24070123151
// B3

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int i;
    float f;
    double d;
    char c;
    char s[100];
    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter a float: ";
    cin >> f;
    cout << "Enter a double: ";
    cin >> d;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Integer: " << i << ", Size: " << sizeof(i) << " bytes\n";
    cout << "Float: " << f << ", Size: " << sizeof(f) << " bytes\n";
    cout << "Double: " << d << ", Size: " << sizeof(d) << " bytes\n";
    cout << "Character: " << c << ", Size: " << sizeof(c) << " bytes\n";
    cout << "String: " << s << ", Size: " << sizeof(s) << " bytes\n";

    return 0;
}

//Output:
//Enter an integer: 6
//Enter a float: 1.9
//Enter a double: 23
//Enter a character: n
//Enter a string: navya
//Integer: 6, Size: 4 bytes
//Float: 1.9, Size: 4 bytes
//Double: 23, Size: 8 bytes
//Character: n, Size: 1 bytes
//String: navya, Size: 100 bytes
