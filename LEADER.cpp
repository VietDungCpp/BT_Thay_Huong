#include <iostream>

using namespace std;

const int maxn = 10e6 + 5;
long long n, a[maxn], b[maxn];
int ld;

int main()
{
    freopen("LEADER.inp", "r", stdin);
    freopen("LEADER.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ld = a[n - 1];
    b[n - 1] = true;

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= ld)
        {
            ld = a[i];
            b[i] = true;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i] == true)
        {
            cout << a[i] << " ";
        }
    }
}
