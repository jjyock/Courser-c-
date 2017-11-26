#include<iostream>
using namespace std;
int main() {
	int n, x, y;//n apple x
	int apple_left;
	cin >> n >> x >> y ;
	if (y / x > n) {
		apple_left = 0;
	}
	else if (y%x == 0) {
		apple_left = n - y / x;
	}
	else if (y%x > 0) {
		apple_left = n - y / x - 1;
	}
	cout << apple_left << endl;
	return 0;


}

