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
    char* temp;
    size += sz; //change size to necessary amount
    temp = new char[size]; //create temp array
    strcpy(temp, chars); //copy main array to temp
    delete[] chars; //delete old array
    chars = new char[size]; //remake initial array
    strcpy(chars, temp); //copy from temp
    delete[] temp; //delete temp array
}

MyString::MyString(const MyString& s) {
    //s1 = s2
    //copy constructor
    size = s.size;
    chars = new char[s.size+1];
    strcpy(chars, s.chars);
}

MyString& MyString::operator=(const MyString& s) {
    //operator=
    if (this == &s) return *this;
    if (size != s.size) {
        delete[] chars;
        chars = nullptr;
        size = 0;
        chars = new char[s.size];
        size = s.size;
    }
    strcpy(chars, s.chars);
    return *this;
}

MyString& MyString::operator+=(const MyString& s) {
//operator+=
    grow(s.size);
    strcat(chars, s.chars);
}

char& MyString::operator[](unsigned int index) { //exit code 0107
    //operator[] for editing element at index of string
    if (index < size) {
        return chars[index];
    }
    else {
        grow(index-size);
        for (unsigned int i = size; i <= index; i++) {
            chars[i] = ' ';
        }
        return chars[index];
    }
}

const char& MyString::operator[](unsigned int index) const {
//operator[] for retrieving element at index of string
    //check if index is in bounds
    if (index < size) {
        return chars[index];
    }
    else {
        return '\0';
    }
}

MyString& MyString::insert(unsigned int index, const MyString& s) {
    //insert at position
    size += s.size; //change size to necessary amount
    char* temp = new char[size]; //create temp array

    unsigned int start = 0, middle = index, endof_word = index + s.size, end = size;

    if (index < size) {
        for (unsigned int i = start; i < middle; i++) temp[i] = chars[i]; //copy old string contents to temp (first half)
        for (unsigned int j = middle; j < endof_word; j++) temp[j] = s.chars[j]; //copy string to temp
        for (unsigned int k = endof_word; k < end; k++) temp[k] = chars[k];
    }

    strcpy(chars, temp);
    return *this;
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
    char* temp = new char[size];
    strcpy(temp, chars);
    return temp;
}

MyString MyString::substring(unsigned int a, unsigned int b) const {
    //return substring from index a to b
    //check if substring is in correct bounds
    MyString temp;
    for (unsigned int i = a; i < b; i++) {
        temp.chars[i] = chars[i];
    }
    return temp;
}

MyString MyString::substring(unsigned int i) const {
    //return substring from 0 to i
    MyString temp;
    for (unsigned int j = 0; j < i; j++)
    {
        temp.chars[j] = chars[j];
    }
    return temp;
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





