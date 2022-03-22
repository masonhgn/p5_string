#include "MyString.h"
#include <cstring>

MyString::MyString() {
//default constructor
	size = 0;
    chars = new char[size+1];
    chars[0] = '\0'; //put null char in only array slot
}

MyString::MyString(const char* c) {
//conversion from cstring 35:24
//s1 = "string" only works if you have this function
    size = strlen(c);
    chars = new char[size+1]; //accounts for extra /n char in cstring library
    strcpy(chars, c);
}

MyString::MyString(int i ) {
//copy contructor
}

MyString::~MyString() {
//destructor
	delete[] chars;
}


void MyString::grow(unsigned int sz) {
    char* ch;
    size += sz; //change size to necessary amount
    ch = new char[size]; //create temp array
    strcpy(ch, chars); //copy main array to temp
    delete[] chars; //delete old array
    chars = new char[size]; //remake initial array
    strcpy(chars, ch); //copy from temp
    delete[] ch;
}

MyString::MyString(const MyString& s) {
//copy constructor
    size = s.size;
    chars = new char[s.size+1];
    strcpy(chars, s.chars);
}

MyString& MyString::operator=(const MyString& s) {
//operator=
    if (s.size != size) {
        delete[] chars;
        chars = new char[s.size];
    }

    strcpy(chars, s.chars);
}

MyString& MyString::operator+=(const MyString& s) {
//operator+=
    grow(s.size);
    strcat(chars, s.chars);
}

char& MyString::operator[](unsigned int index) {
//operator[] for editing element at index of string
}

const char& MyString::operator[](unsigned int index) const {
//operator[] for retrieving element at index of string
    //check if index is in bounds
    return chars[index];
}

MyString& MyString::insert(unsigned int index, const MyString& s) {
//insert at position
}

int MyString::indexOf(const MyString& s) const {
//return index of substring with in string object
}

int MyString::getLength() const {
//return length of string
    return size;
}

const char* MyString::getCString() const {
//return cstring
}

MyString MyString::substring(unsigned int a, unsigned int b) const {
//return substring from index a to b
}

MyString MyString::substring(unsigned int i) const {
//return substring from 0 to i
}



ostream& operator<<(ostream& o, const MyString& s) {
//insertion operator
//    for (int i = 0; i < s.size; i++) {
//        o << s.chars[i]; //print out each letter
//    }

    o << s.chars;
    return o;
}

istream& operator>>(istream& i, MyString& s) {
//extraction operator
    //getline()??
return i;
}

istream& getLine(istream& i, MyString& s) {
//getLine() function for getting entire line of user input
}

istream& getLine(istream& i, MyString& s, char delim) {
//getline function with delimiter
}

MyString operator+(const MyString& a, const MyString& b) {
//operator+
    //use strcat
}





bool operator< (const MyString& x, const MyString& y) {
//operator<
    if (x.size < y.size) return true;
    else return false;
    //is this right?
}

bool operator> (const MyString& x, const MyString& y) {
//operator>
}

bool operator<=(const MyString& x, const MyString& y) {
//operator<=
}

bool operator>=(const MyString& x, const MyString& y) {
//operator>=
}

bool operator==(const MyString& x, const MyString& y) {
//operator==
}

bool operator!=(const MyString& x, const MyString& y) {
//operator!=
}




