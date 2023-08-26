#include <iostream>

using namespace std;

long long n, tong = 0;

int main()
{
    freopen("THEMCHUSO.inp", "r", stdin);
    freopen("THEMCHUSO.out", "w", stdout);

    cin >> n;

    while (n != 0)
    {
        tong += n % 10;
        n /= 10;
    }

    cout << 3 - (tong % 3);
}
