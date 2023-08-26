#include <iostream>

using namespace std;

const int maxn = 2005;
int m, n, a[maxn][maxn];
int maxa, mina;

int main()
{
    freopen("M2C01.inp", "r", stdin);
    freopen("M2C01.out", "w", stdout);

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    maxa = mina = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maxa = max(maxa, a[i][j]);
            mina = min(mina, a[i][j]);
        }
    }
    cout << mina << " " << maxa;
}
