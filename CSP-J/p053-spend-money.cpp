#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int p1 = 4, p2 = 5, p3 = 6;
    int money;
    cout << "小Q开始有多少钱？ ";
    cin >> money;
    if(money < 8)
    {
        cout << "小Q开始的钱必须8元及以上 ";
        return 0;
    }
    int count = money / p1;
    int surplus = money % p1;
    switch (surplus)
    {
    case 3:
        printf("小Q一起买了 %i 支笔，%i 支 %i 块的，%i 支 %i 块的，%i 支 %i 块的。", count, count - 2, p1, 1, p2, 1, p3);
        return 0;
    case 2:
        printf("小Q一起买了 %i 支笔，%i 支 %i 块的，%i 支 %i 块的，%i 支 %i 块的。", count, count--, p1, 0, p2, 1, p3);
        return 0;
    case 1:
        printf("小Q一起买了 %i 支笔，%i 支 %i 块的，%i 支 %i 块的，%i 支 %i 块的。", count, count--, p1, 1, p2, 0, p3);
        return 0;
    case 0:
        printf("小Q一起买了 %i 支笔，%i 支 %i 块的，%i 支 %i 块的，%i 支 %i 块的。", count, count, p1, 0, p2, 0, p3);
        return 0;
    }
    return 0;
}
