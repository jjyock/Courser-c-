#include<iostream>
//#include<math.h>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int score;
	cin >> score;
	if (score >= 95 && score <= 100) cout << 1 << endl;
	else if (score >= 90) cout << 2 << endl;
	else if (score >= 85) cout << 3 << endl;
	else if (score >= 80) cout << 4 << endl;
	else if (score >= 70) cout << 5 << endl;
	else if (score >= 60) cout << 6 << endl;
	else cout << 7 << endl;
	//system("pause");

	return 0;


}