#include "MyString.h"


MyString::MyString() {
//default constructor
	maxSize = 0;
	currentSize = 0;
}

MyString::MyString(const char*) {
//conversion from cstring
}

MyString::MyString(int i ) {
//copy contructor
}

MyString::~MyString() {
//destructor
	delete[] chars
}

MyString::MyString(const MyString& s) {
//copy constructor
}

MyString& MyString::operator=(const MyString& s) {
//operator=
}

MyString& MyString::operator+=(const MyString& s) {
//operator+=
}

char& MyString::operator[](unsigned int index) {
//operator[] for editing element at index of string
}

const char& MyString::operator[](unsigned int index) const {
//operator[] for retrieving element at index of string
}

MyString& MyString::insert(unsigned int index, const MyString& s) {
//insert at position
}

int MyString::indexOf(const MyString& s) const {
//return index of string char
}

int MyString::getLength() const {
//return length of string
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
}

ostream& operator>>(istream& i, MyString& s) {
//extraction operator
}

istream& getLine(istream& i, MyString& s) {
//getLine() function for getting entire line of user input
}

istream& getLine(istream& i, MyString& s, char delim) {
//getline function with delimiter
}

MyString operator+(const MyString& s, const MyString& s) {
//operator+
}





friend bool operator< (const MyString& , const MyString& ) {
//operator<
}

friend bool operator> (const MyString& , const MyString& ) {
//operator>
}

friend bool operator<=(const MyString& , const MyString& ) {
//operator<=
}

friend bool operator>=(const MyString& , const MyString& ) {
//operator>=
}

friend bool operator==(const MyString& , const MyString& ) {
//operator==
}

friend bool operator!=(const MyString& , const MyString& ) {
//operator!=
}




