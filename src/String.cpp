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

String::String(const char* s) {
	size = 0;
	const char* temp = s;
	while (*temp != '\0') {
		size++;
		temp++;
	}
	str = new char[size + 1];
	for (int i = 0; i < size; i++) {
		str[i] = s[i];
	}
	str[size] = '\0';
}

String::String(const String& s) {
	size = s.size;
	str = new char[size + 1];
	for (int i = 0; i < size; i++) {
		str[i] = s.str[i];
	}
	str[size] = '\0';
}

String::~String() {
	delete[] str;
}

char& String::operator[](int index) {
	return str[index];
}

String& String::operator=(String& s) {
	delete[] str;
	size = s.size;
	str = new char[size + 1];
	for (int i = 0; i < size; i++) {
		str[i] = s.str[i];
	}
	str[size] = '\0';
	return *this;
}

String& String::operator+=(String& s) {
	int newSize = size + s.size;
	char* newStr = new char[newSize + 1];
	for (int i = 0; i < size; i++) {
		newStr[i] = str[i];
	}
	for (int i = 0; i < s.size; i++) {
		newStr[size + i] = s.str[i];
	}
	newStr[newSize] = '\0';
	size = newSize;
	delete[] str;
	str = newStr;
	return *this;
}

ostream& operator<<(ostream &out, String &s) {
	for (int i = 0; i < s.size; i++) {
		out << s.str[i];
	}
	return out;
}
