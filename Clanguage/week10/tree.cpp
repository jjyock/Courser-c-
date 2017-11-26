#include<iostream>  
using namespace std;  
int main() {  
    int l, m;  
    cin >> l >> m;  
    int road[10001];  
    for (int i = 0; i < l+1; i++) {  
        road[i] = 1;  
    }  
    for (int i = 0; i < m; i++) {  
        int a, b;  
        cin >> a >> b;  
        for (int j = a; j < b+1; j++) {  
            road[j] = 0;  
        }  
    }  
    int count = 0;  
    for (int i = 0; i < l+1; i++) {  
        if (road[i] == 1)  
            count++;  
    }  
    cout << count << endl;  
    return 0;  
}  