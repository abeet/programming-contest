#include <cstdio>
#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    cout << "输入一个3位数 ";
    int n;
    cin >> n;
    if (n < 100 || n > 999)
    {
        cout << "不是3位数！";
        return 0;
    }
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    printf("反转之后%i%i%i\n", c, b, a);
    return 0;
}
