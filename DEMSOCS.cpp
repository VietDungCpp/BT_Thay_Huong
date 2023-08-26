#include <iostream>

using namespace std;

long long n, dem = 0;

int main()
{
    freopen("DEMSOCS.inp", "r", stdin);
    freopen("DEMSOCS.out", "w", stdout);

    cin >> n;

    while (n != 0)
    {
        dem++;
        n /= 10;
    }

    cout << dem;
}
