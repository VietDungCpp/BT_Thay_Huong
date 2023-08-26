#include <iostream>

using namespace std;

const int maxn = 2005;
int m, n, a[maxn][maxn];
int mina;

int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    mina = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mina = min(mina, a[i][j]);
        }
    }
    cout << mina;
}
