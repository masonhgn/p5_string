#include <iostream>

#include "MyString.cpp"
int main() {
    MyString s = "Hellllooooo";
    MyString b;
    b = s.substring(0,6);
    cout << b;
    return 0;
}
