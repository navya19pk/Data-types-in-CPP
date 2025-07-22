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
