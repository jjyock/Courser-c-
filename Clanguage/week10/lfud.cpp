#include <iostream>  
#define MAX 20  
using namespace std;  
  
int main()  
{  
    int n;//n为数组的有效长度  
    cin >> n ;  
    int badcell=0;//记录异常细胞数量  
    int a[MAX][MAX]={0};  
    for(int i=0;i<n;i++)  
        for(int j=0;j<n;j++)  
            cin >> a[i][j];  
    for(int i=1;i<n-1;i++)  
        for(int j=1;j<n-1;j++)  
        {  
           //当前的元素与周围四个元素比较  
            if(a[i-1][j]-a[i][j]>=50&&  
               a[i+1][j]-a[i][j]>=50&&  
               a[i][j-1]-a[i][j]>=50&&  
               a[i][j+1]-a[i][j]>=50)  
            badcell++;  
        }  
    //输出结果  
    cout << badcell<<endl ;  
    return 0;  
}  