#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main() {
	double x[100], y[100],temp,maxdis=0;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x[i] >> y[i];
		}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			temp = sqrt((x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(y[j] - y[i]));
			if (temp > maxdis) maxdis = temp;
		}
	}
	cout << fixed << setprecision(4) << maxdis << endl;

	//system("pause");
	return 0;
}