#include<iostream>
using namespace std;
int main() {
	char a[80];
	int a_c=0, e_c=0, i_c=0, o_c=0, u_c=0;
	cin.getline(a, 80);
	for (int i = 0; i < 80; i++) {
		if (a[i] == 'a') a_c++;
		else if (a[i] == 'e') e_c++;
		else if (a[i] == 'i') i_c++;
		else if (a[i] == 'o') o_c++;
		else if (a[i] == 'u') u_c++;
	}
	cout << a_c <<" "<< e_c << " " << i_c << " " << o_c << " " << u_c << endl;
	//system("pause");
	return 0;
}