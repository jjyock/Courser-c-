#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << n / 100 % 10 << endl;
	n=n%100;
	cout<<n/10% 10 << endl;
	n %= 10;
	cout << n <<endl;
	//#system("pause");
	


	return 0;
	

}

