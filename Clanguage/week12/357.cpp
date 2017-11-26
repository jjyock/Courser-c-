#include<iostream>
using namespace std;
int main() {
	int n, a[3] = { 3,5,7 },b[3],c=0;
	while (cin >> n)
	{
		int k = (n % 3 == 0) + (n% 5 == 0) * 2 + (n % 7 == 0) * 4;
		switch (k)
		{
		case 0: cout << "n" << endl; break;
		case 1: cout << "3" << endl; break;
		case 2: cout << "5" << endl; break;
		case 3: cout << "3 5" << endl; break;
		case 4: cout << "7 " << endl; break;
		case 5: cout << "3 7" << endl; break;
		case 6: cout << "5 7" << endl; break;
		case 7: cout << "3 5 7" << endl;
		}

			
		
		
		}

	// good luck:)

	//system("pause");
	return 0;
}