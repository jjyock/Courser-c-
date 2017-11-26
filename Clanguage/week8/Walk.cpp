#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	float dis;
	for (int i = 0; i < n; i++) {
		cin >> dis;
		if (dis / 1.2 < (23 + 27 + dis / 3.0)) {
			cout << "Walk" << endl;
		}
		else if (dis / 1.2> (23 + 27 + dis / 3.0)) {
			cout << "Bike" << endl;
		}
		else {
			cout << "All" << endl;
		}
	}
	return 0;
}