#include <iostream>

using namespace std;

int a, b;

int main()
{
    freopen("HCNLN.inp", "r", stdin);
    freopen("HCNLN.out", "w", stdout);

    cin >> a >> b;

    cout << (a + b) / 2 << " " << (a + b) - (a + b) / 2;
}
