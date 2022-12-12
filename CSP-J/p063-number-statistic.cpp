#include <string.h>
#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

int strToInt(string s) {
    stringstream ss(s);
    int num;
    ss >> num;
    return num;
}

int main()
{
    cout << "请输入若干个以空格隔开的数字，然后按'Enter' ";
    char chars[99];
    gets(chars);
    // cin.getline(chardds, 99);  // 和gets同样的效果
    cout << "你输入的内容为 " << chars << endl;
    const char *p = " "; // 定义一个指向字符串常量的指针
    char *s = strtok(chars, p);// 定义一个指向字符串的指针
    int sum = 0;
    int i = 0;
    while (s) {
        stringstream ss(s);
        int num=strToInt(s);
        ss >> num;
        if (ss.str().compare("0") != 0 && num == 0) {
            cout << s << " 不是数字" << endl;
        } else {
            i++;
            sum += num;
        }
        s = strtok(NULL, p);
    }
    cout << "数字个数 " << i << endl;
    cout << "数字和 " << sum << endl;
    cout << "数字均值 " << float(sum) / i << endl;
    return 0;
}
