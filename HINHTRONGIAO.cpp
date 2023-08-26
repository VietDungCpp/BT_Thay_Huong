#include <iostream>
#include <cmath>

using namespace std;

struct Hinhtron
{
    double x, y, r;
};

bool giao(Hinhtron p, Hinhtron q)
{
    double l = sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));

    if (p.r + q.r <= l)
    {
        return false;
    }
    return true;
}

int n;
const int maxn = 10e6 + 5;
Hinhtron a[maxn];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("HINHTRONGIAO.inp", "r", stdin);
    freopen("HINHTRONGIAO.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].r;
    }

    int d = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (giao(a[i], a[j]))
            {
                d++;
            }
        }
    }
    cout << d;
}
