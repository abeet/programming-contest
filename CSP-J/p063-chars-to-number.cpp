#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "输入一个数 ";
    char chars[99];
    cin >> chars;
    istringstream is(chars); // 构造输入字符串流，流的内容为chars的值
    int num;
    is >> num; // 从 is 流中读入一个 int 整数存入 num 中
    cout << chars << endl;
    cout << num << endl;
}
