#include <iostream>
using namespace std;

#include "String.h"

String::String() {
	size = 0;
	str = new char[1];
	str[0] = '\0';
}

String::String(char c) {
	size = 1;
	str = new char[2];
	str[0] = c;
	str[1] = '\0';
}

String::String(const char *s) {
	// TODO
}

String::String(const String& s) {
	// TODO
}

String::~String() {
	delete[] str;
}

char& String::operator[](int index) {
	// TODO
}

String& String::operator=(String& s) {
	// TODO
}

String& String::operator+=(String& s) {
	// TODO
}
