#include <string.h>
#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "请输入一个小于 1000 的数字，然后按'Enter' ";
    int n;
    cin >> n;

    long s = 0;

    long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        s += factorial;
    }
    cout << s;

    return 0;
}
