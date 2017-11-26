#include<iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    char type;
    cin >> x >> y>>type;
    switch (type)
    {
    case‘+‘:
    {
        cout << x + y << endl;
        break;
    }
    case‘-‘:
    {
        cout << x - y << endl;
        break;
    }
    case‘*‘:
    {
        cout << x*y << endl;
        break;
    }
    case‘/‘:
    {
        if (y == 0)
            cout << "Divided by zero!";
        else
            cout << x / y << endl;
        break;
    }
    default:
        cout << "Invalid operator!";
    }
    return 0;
}