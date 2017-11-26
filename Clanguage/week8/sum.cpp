#include<iostream>
using namespace std;
int main() {
	int a;
	int n1, n2, n3, n4, n5,sum=0;
	cin >> a >> n1 >> n2 >> n3 >> n4 >> n5;
	if (n1 < a) {
		sum += n1;
	}
	if (n2 < a) {
		sum += n2;
	}
	if (n3 < a) {
		sum += n3;
	}
	if (n4 < a) {
		sum += n4;
	}
	if (n5 < a) {
		sum += n5;
	}
	cout << sum << endl;
	return 0;
}