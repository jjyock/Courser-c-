#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sumn = 0, sumd = 1;
	while (n--) {
		char slash;
		int num, deno;
		cin >> num >> slash >> deno;
		sumn = sumn*deno + num*sumd;
		sumd = sumd*deno;

	}
	int a = sumd, b = sumn, c;
	while (a != 0) {
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	sumd /= gcd;
	sumn /= gcd;
	if (sumd > 1) {
		cout << sumn << '/' << sumd << endl;
	}
	else {
		cout << sumn << endl;
	}
	return 0;
}