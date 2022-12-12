#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int strToInt(string s) {
    stringstream ss(s);
    int num;
    ss >> num;
    return num;
}

int main()
{
    int arr[111];
    memset(arr, 0, sizeof(arr));
    // 接收输入的数字存到数组arr里，见前面的实现
    cout << "请输入若干个以空格隔开的数字，然后按'Enter' ";
    char chars[222];
    gets(chars);
    // cin.getline(chardds, 99);  // 和gets同样的效果
    cout << "你输入的内容为 " << chars << endl;
    string str = stringstream(chars).str();
    string p = " ";
    int pos = 0;
    str += p;
    int size = str.size();
    int len = 0;
    for (int i = 0, j = 0; i < size; i++) {
        pos = str.find(p, i);
        if (pos != i && pos < size) {
            string s = str.substr(i, pos - i);
            int num = strToInt(s);
            if (s.compare("0") != 0 && num == 0) {
                cout << s << " 不是数字" << endl;
            } else {
                arr[len] =  num;
                len++;
            }

            j++;
            i = pos + p.size() - 1;
        }
    }
    cout << "数字个数 " << len << endl;
    // 对数组里的数冒泡排序
    for (int i = 0, len2 = len; i < len - 1; i++) {
        for (int j = 0; j < len2 - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        len2--;
    }
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
