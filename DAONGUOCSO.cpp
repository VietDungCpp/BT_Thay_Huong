#include <iostream>

using namespace std;

int n, daonguoc;

int main()
{
    freopen("DAONGUOCSO.inp", "r", stdin);
    freopen("DAONGUOCSO.out", "w", stdout);

    cin >> n;

    while (n != 0)
    {
        daonguoc = daonguoc * 10 + (n % 10);
        n /= 10;
    }

    cout << daonguoc;
}
