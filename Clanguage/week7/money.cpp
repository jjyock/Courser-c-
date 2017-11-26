#include<iostream>
//#include<math.h>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int n;
	int num_100, num_50, num_20, num_10, num_5, num_1;
	cin >> n;
	num_100 = n / 100;
	n = n - num_100 * 100;
	num_50 = n / 50;
	n -= num_50 * 50;
	num_20 = n / 20;
	n -= num_20 * 20;
	num_10 = n / 10;
	n -= num_10 * 10;
	num_5 = n / 5;
	n -= num_5 * 5;
	num_1 = n;
	cout << num_100 <<"\n"
		<<num_50 <<"\n"
		<<num_20 <<"\n"
		<<num_10 <<"\n"
		<<num_5 <<"\n"
		<<num_1 << endl;
	//system("pause");

	return 0;


}