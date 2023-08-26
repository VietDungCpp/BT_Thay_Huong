#include <iostream>

using namespace std;

int n;

int main()
{
    freopen("DEMBI.inp", "r", stdin);
    freopen("DEMBI.out", "w", stdout);
    cin >> n;
    if ((2 * n % 5 == 0) && (n > 2 * n / 5))
    {
        cout << n - 2 * n / 5 << " " << 2 * n / 5;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
