#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "输入一个大于100小于99999999的数 ";
    int n;
    cin >> n;
    if (n < 100 || n > 99999999)
    {
        cout << "不是大于100小于99999999的数！";
        return 0;
    }
    string num_str = to_string(n);

    stringstream ss;
    ss << n;
    string s = ss.str();
    cout << "反转之后";
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
