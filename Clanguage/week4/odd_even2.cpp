#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    //maopao 
    for (int i=0;i<9;i++){
        for (int j=1;j<10-i;j++){
            bool leftiseven=a[j-1]%2==0;
            bool rightiseven=a[j]%2==0;
            if((leftiseven&&!rightiseven)||(leftiseven==rightiseven&&a[j-1]>a[j])){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}