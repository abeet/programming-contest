#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int s1 = 15 * 20;
    int s2 = 20 * 10;
    int s3 = (s1 - s2) / (20 - 10);
    cout << "每天的新草可供" << s3 << "头牛吃\n";
    return 0;
}
