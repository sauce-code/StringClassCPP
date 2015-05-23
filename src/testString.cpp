#include "String.h"

ostream& operator<<(ostream &out, String &s) {
	for (int i = 0; i < s.size; i++) {
		out << s.str[i];
	}

	return out;
}

int main() {
	String s;
	String s2('H');
	String s3("Hallo");
	String s4(s3);
	String s5 = s3;
	String s6 = ("ABC");
	s6 += s3;

	cout << s << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s4[1] << endl;
	cout << s5 << endl;
	cout << s6 << endl;

}
