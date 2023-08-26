#include <iostream>

using namespace std;

int n, dem = 0;

int main()
{
    freopen("GCD.inp", "r", stdin);
    freopen("GCD.out", "w", stdout);

    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }

    if (dem == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
