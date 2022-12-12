#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;

int loop = 0;

int main()
{
    int all[101]; // 项值为0索引为素数 项值为1索引不为素数
    memset(all, 0, sizeof(all));
    int col = 1;
    all[1] = 1;
    for (int i = 2; i <= 100; i++) {
        for (int j = i + i; j <= 100; j += i) {
            all[j] = 1;
        }
        if (!all[i]) {// 为素数
            cout << setw(5) << i;
            if (col % 5 == 0) {
                cout << endl;
            }
            col++;
        }
    }
    cout << endl;
    return 0;
}
