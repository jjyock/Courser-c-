#include<iostream>
using namespace std;
int main() {
	char a[500],bn;
	int num=0,max=0;
	cin.getline(a, 80);
	for (int i = 0; a[i]!= '.'; i++) {
		if (a[i] != ' ') {
			num++;
			
			
		}
		else { num = 0; }
		if (num > max) {
			max = num;
			bn = i;

		}
	}
	for (int i = bn-max; i < bn; i++) {
		cout << a[i+1];
	}

	//system("pause");
	return 0;
}