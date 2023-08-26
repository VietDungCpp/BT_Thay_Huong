#include <iostream>

using namespace std;

const int maxn = 10e6 + 5;
long long n, m, a[maxn];
long long tmin = 0, tmax = 0;

long long songuoi(long long t)
{
    long long s = 0;

    for (int i = 1; i <= n; i++)
    {
        s += t / a[i];
    }
    return s;
}

int main()
{
    freopen("CHECKIN.inp", "r", stdin);
    freopen("CHECKIN.out", "w", stdout);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > tmax)
        {
            tmax = a[i];
        }
    }

    tmax *= m;
    long long t;

    while (tmin < tmax)
    {
        t = (tmin + tmax) / 2;
        if (songuoi(t) < m)
        {
            tmin = t + 1;
        }
        else
        {
            tmax = t;
        }
    }

    cout << tmin;
}
