#include <iostream>

using namespace std;

long long m, n;

int main()
{
    freopen("CLOCK.inp", "r", stdin);
    freopen("CLOCK.out", "w", stdout);

    cin >> m >> n;

    cout << (m + n) % 60;
}
