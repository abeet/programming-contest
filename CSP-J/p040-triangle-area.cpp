#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout << "请输入三角形三条边的三条边长 ";
    cin >> a >> b >> c;
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    // printf("三角形的面积 %f", s);
    cout << "三角形的面积 " << s << endl;
    return 0;
}
