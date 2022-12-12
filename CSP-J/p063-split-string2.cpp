#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    cout << "请输入若干个以空格隔开的数字，然后按'Enter' ";
    char chars[99];
    gets(chars);
    // cin.getline(chardds, 99);  // 和gets同样的效果
    cout << "你输入的内容为 " << chars << endl;

    string str = stringstream(chars).str();
    string p = " ";
    int pos = 0;
    str += p;
    int size = str.size();
    string result[size];
    // vector<string> result;  // 也可以用 vector，不用指定数组大小
    for (int i = 0, j = 0; i < size; i++) {
        pos = str.find(p, i);
        if (pos != i && pos < size) {
            string s = str.substr(i, pos - i);
            cout << s << endl;
            // result.push_back(s);
            result[j] = s;
            j++;
            i = pos + p.size() - 1;
        }
    }
}
