#include <iostream>
#include <algorithm>

using namespace std;

int n, m, p[10005];
int gmax = 0;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    freopen("COMPUTER.inp", "r", stdin);
    freopen("COMPUTER.out", "w", stdout);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> p[i];
    }

    sort(p + 1, p + m + 1, cmp);

    for (int i = 1; i <= min(m, n); i++)
    {
        if (i * p[i] > gmax)
        {
            gmax = i * p[i];
        }
    }
    cout << gmax;
}
