#include <iostream>

using namespace std;

int main()
{
    // 15*h/2=150
    float h = 150 * 2 / 15;
    float area = 15 * h + (25 - 15) * h / 2;
    cout << "梯形面积" << area << endl;
    return 0;
}
