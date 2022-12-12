#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    cout << "小明开始有多少钱？ ";
    float start;
    cin >> start;
    cout << "小明花了多少钱买书？ ";
    float cost;
    cin >> cost;
    float rest = start - cost + cost * 0.8;
    printf("小明还剩 %.2f 块钱\n", rest);
    return 0;
}
