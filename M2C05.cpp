#include <iostream>

using namespace std;

const int maxn = 2005;
int m, n, a[maxn][maxn];
int u, v, maxa;

int main()
{
    freopen("M2C05.inp", "r", stdin);
    freopen("M2C05.out", "w", stdout);

    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    maxa = a[1][1];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (maxa < a[i][j])
            {
                maxa = a[i][j];
                u = i;
                v = j;
            }
        }
    }
    cout << u << " " << v;
}

