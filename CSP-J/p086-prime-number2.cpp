#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int all[101]; // 项值为0索引为素数 项值为1索引不为素数
    memset(all, 0, sizeof(all));
    int col = 1;
    for (int i = 2; i <= 100; i++) {
        if (all[i] == 1) {
            continue;
        }
        if (isPrime(i)) {
            for (int j = i; j <= 100; j += i) {
                all[j] = 1;
            }
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
