#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 10e6 + 5;
int n, a[maxn], b[maxn];

int main()
{
    freopen("XEPDIA.inp", "r", stdin);
    freopen("XEPDIA.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    b[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= b[i - 1])
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = b[i - 1];
        }
    }
    cout << b[n - 1];
}
