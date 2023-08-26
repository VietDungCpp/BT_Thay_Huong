#include <iostream>

using namespace std;

int a[10000], n;

int main()
{
    freopen("MINA.inp", "r", stdin);
    freopen("MINA.out", "w", stdout);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int mina = a[1];

    for (int i = 2; i <= n; i++)
    {
        if (a[i]<mina)
        {
            mina = a[i];
        }
    }
    cout << mina;
}
