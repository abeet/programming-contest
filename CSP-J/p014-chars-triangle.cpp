#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    char a;
    int line = 5;
    cout << "请输入一个字符 ";
    cin >> a;
    for (int i = 0; i < line; i++)
    {
        for (int k = 0; k < line - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
