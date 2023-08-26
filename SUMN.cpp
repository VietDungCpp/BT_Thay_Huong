#include <iostream>

using namespace std;

long long n, m, t;

int main()
{
    freopen("SUMN.inp", "r", stdin);
    freopen("SUMN.out", "w", stdout);

    cin >> n;

    t = n;
    m = 0;

    while (t != 0)
    {
        m += t % 10;
        t /= 10;
    }

    cout << m + n;
}
