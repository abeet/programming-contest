#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, temp;
    cout << "请输入3个数 ";
    cin >> a >> b >> c;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("排序结果 %i %i %i", a, b, c );
    return 0;
}
