#include <iostream>

using namespace std;

const int maxn = 10e6 + 5;
long long n, k, a[maxn];
int t = 0, tmax = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("TONGK.inp", "r", stdin);
    freopen("TONGK.out", "w", stdout);

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= k; i++)
    {
        t += a[i];
    }

    for (int i = k + 1; i <= n; i++)
    {
        t += a[i];
        t -= a[i - k];

        if (t > tmax)
        {
            tmax = t;
        }
    }

    cout << tmax;
}
