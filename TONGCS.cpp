#include <iostream>

using namespace std;

long long n, t = 0;

int main()
{
    freopen("TONGCS.inp", "r", stdin);
    freopen("TONGCS.out", "w", stdout);

    cin >> n;

    while (n != 0)
    {
        t += n % 10;
        n /= 10;
    }

    cout << t;
}
