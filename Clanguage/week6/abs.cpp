#include<iostream>
//#include<math.h>
using namespace std;
int main() {
	int a[6];
	int max_odd = 0, min_even = 100, result;
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
		if ((a[i] % 2 == 0) && a[i]<min_even) {
			min_even = a[i];

		}
		else if ((a[i] % 2 == 1) && a[i] > max_odd) {
			max_odd = a[i];
		}
	}
	if (max_odd > min_even) {
		result = max_odd - min_even;
	}
	else {
		result = min_even - max_odd;
	}
	//result = abs(max_odd - min_even);
	cout << result << endl;



	return 0;


}