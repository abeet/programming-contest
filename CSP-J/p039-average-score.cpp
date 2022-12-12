#include <cstdio>
#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    cout << "请问女同学有多少位？ ";
    int x;
    cin >> x;
    cout << "请问男同学有多少位？ ";
    int y;
    cin >> y;
//    float average = (x * 87.00 + y * 85.00) / (x + y);
    float average = float(x * 87 + y * 85) / (x + y);
    cout << "全体学生的平均分是 " << average << endl;
    return 0;
}
