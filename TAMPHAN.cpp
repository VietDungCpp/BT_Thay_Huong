#include <iostream>

using namespace std;

long long n, d = 0;

int main()
{
    freopen("TAMPHAN.inp", "r", stdin);
    freopen("TAMPHAN.out", "w", stdout);

    cin >> n;

    while (n / 3 != 0)
    {
        n /= 3;
        d++;
    }

    cout << d;
}
