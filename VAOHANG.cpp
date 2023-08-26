#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 10e6 + 5;
int n, x[maxn], y[maxn];

int main()
{
    freopen("VAOHANG.inp", "r", stdin);
    freopen("VAOHANG.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    sort(x + 1, x + n + 1);
    sort(y + 1, y + n + 1);

    int kq = abs(x[1] - y[1]);

    for (int i = 2; i <= n; i++)
    {
        kq = max(kq, abs(x[i] - y[i]));
    }
    cout << kq;
}
