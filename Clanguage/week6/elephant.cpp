#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int h, r;//
	float v;
	int bin;
	cin >> h >> r;
	v = r*r* h*3.1415926;

	bin = ceil(20000 / v);

	cout << bin << endl;
	return 0;
	

}

