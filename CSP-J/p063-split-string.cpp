#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    cout << "请输入若干个以空格隔开的数字，然后按'Enter' ";
    char str[99];
    gets(str);
    // cin.getline(chardds, 99);  // 和gets同样的效果
    printf("你输入的数字有 %s\n", str);
    cout << "你输入的数字有 " << str << endl;
    const char *d = " ";
    char *p;
    p = strtok(str, d);
    while(p){
        cout << p << endl;
        p= strtok(NULL, d);
    }
    return 0;
}
