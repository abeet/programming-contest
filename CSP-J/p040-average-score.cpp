#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    float all = 6 * 9.6;
    float max = all - 9.4 * 5;
    float min = all - 9.8 * 5;
    float average = (all - max - min) / 4;
    printf("去掉最低分去掉最高分，余下的平均分 %.2f", average);
    return 0;
}
