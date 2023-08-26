#include <iostream>

using namespace std;

const int maxn = 2005;
int m, n, a[maxn][maxn];

int main()
{
    freopen("M2C03.inp", "r", stdin);
    freopen("M2C03.out", "w", stdout);

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > a[i][0])
            {
                a[i][0] = a[i][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << a[i][0] << endl;
    }
}
