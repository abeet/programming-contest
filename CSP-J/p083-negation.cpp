#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int arr[100];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 100; i++) {
        for (int j = 1; j <= i + 1; j++) {
            if ((i + 1) % j == 0) {
                arr[i] = !arr[i];
            }
        }
        if (arr[i]) {
            cout <<  i + 1 << " ";
        }
    }
    return 0;
}
