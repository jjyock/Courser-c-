/* 
描述 
一般我们用strcmp可比较两个字符串的大小，比较方法为对两个字符串从前往后逐个字符相比较 
（按ASCII码值大小比较），直到出现不同的字符或遇到'\0'为止。如果全部字符都相同，则认为相同； 
如果出现不相同的字符，则以第一个不相同的字符的比较结果为准。但在有些时候，我们比较字符串的 
大小时，希望忽略字母的大小，例如"Hello"和"hello"在忽略字母大小写时是相等的。请写一个程序， 
实现对两个字符串进行忽略字母大小写的大小比较。 
输入 
输入为两行，每行一个字符串，共两个字符串。（请用cin.getline(s,80)录入每行字符串） 
（每个字符串长度都小于80） 
输出 
如果第一个字符串比第二个字符串小，输出一个字符"<" 
如果第一个字符串比第二个字符串大，输出一个字符">" 
如果两个字符串相等，输出一个字符"=" 
样例输入 
Hello 
hello 
样例输出 
= 
*/  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    char s1[80],s2[80];  
    cin.getline(s1,80);  
    cin.getline(s2,80);  
    int i=0;//因为i要在循环外使用，所以在此处定义循环变量  
    for(;s1[i]!='\0'&&s2[i]!='\0';i++)  
    {  
        if(s1[i]>='A'&&s1[i]<='Z')//如果字母为大写，统一转化为小写比较  
            s1[i]+=32;  
        if(s2[i]>='A'&&s2[i]<='Z')  
            s2[i]+=32;  
        if(s1[i]>s2[i])//比较当前字符的大小并判断  
            {  
                cout << '>' ;  
                return 0;  
            }  
        else if(s1[i]<s2[i])  
            {  
                cout << '<' ;  
                return 0;  
            }  
    }  
    if(s1[i]==s2[i])//如果某一个字符串遇到\0，此时看谁先遇到则谁小  
        cout << '=';  
    else if(s1[i]=='\0')  
        cout << '<';  
    else  
        cout << '>';  
    return 0;  
}  