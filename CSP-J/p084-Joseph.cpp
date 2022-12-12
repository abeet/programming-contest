#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "请输入两个数字 ";
    int n, m;
    cin >> n >> m;
    printf("n=%d m=%d\n", n, m);
    int arr[n];
    memset(arr, 0, sizeof(arr));
    int poped = 0;
    int i = 0;
    int j = 0;
    while (poped != n) {
        if (arr[i] == 0) {
            if (j == m - 1) {
                arr[i] = 1;
                poped++;
                cout << i + 1 << " ";
                j = 0;
            } else {
                j++;
            }
        }
        i++;
        if (i == n) {
            i = 0;
        }
    }

    return 0;
}
