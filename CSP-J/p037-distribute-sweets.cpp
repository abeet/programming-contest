#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    cout << "输入a,b,c,d,e 5个小朋友的初始糖果 ";
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    a = a / 3;
    e += a;
    b += a;
    b = b / 3;
    a += b;
    c += b;
    c = c / 3;
    b += c;
    d += c;
    d = d / 3;
    c += d;
    e += d;
    e = e / 3;
    d += e;
    a += e;
    printf("a,b,c,d,e 5个小朋友现在的糖果数 %d %d %d %d %d\n", a, b, c, d, e);
    return 0;
}
