#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "请输入一个简单算式 ";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b;
        return 0;
    case '-':
        cout << a - b;
        return 0;
    case '*':
        cout << a*b;
        return 0;
    case '/':
        if(b != 0)
        {
            cout << a / b;
        }
        else
        {
            cout << "除数不能为0";
        }
        return 0;
    default:
        cout << "只支持简单的+-*/";
        return 0;
    }
    return 0;
}
