#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n,max=0,temp;
	cin >> n;
	while (n) {
		cin >> temp;
		if (temp > 100 || temp < 0) {
			continue;
		}
		if (temp > max) {
			max = temp;
		}
		n--;
	}
	cout << max << endl;



	return 0;
	

}

