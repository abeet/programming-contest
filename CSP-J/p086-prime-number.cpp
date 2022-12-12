#include <iostream>
#include <iomanip>
#include <cmath>

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
    int col = 1;
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
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
