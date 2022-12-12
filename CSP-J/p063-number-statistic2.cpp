#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>

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

    string str = stringstream(chars).str();
    string p = " ";
    int pos = 0;
    str += p;
    int size = str.size();
    int sum = 0;
    int c = 0;
    for (int i = 0, j = 0; i < size; i++) {
        pos = str.find(p, i);
        if (pos != i && pos < size) {
            string s = str.substr(i, pos - i);
            int num = strToInt(s);
            if (s.compare("0") != 0 && num == 0) {
                cout << s << " 不是数字" << endl;
            } else {
                c++;
                sum += num;
            }

            j++;
            i = pos + p.size() - 1;
        }
    }

    cout << "数字个数 " << c << endl;
    cout << "数字和 " << sum << endl;
    cout << "数字均值 " << float(sum) / c << endl;
    return 0;
}
