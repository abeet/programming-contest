#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int price = 10;
    cout << "票价10元，请问你要买几张票？\n ";
    int n;
    cin >> n;
    int all = price * n;
    cout << "你需要支付" << all << "元\n";
    return 0;
}
