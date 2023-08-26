#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 10e6 + 5;
int n, a[maxn], t = 0;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    freopen("BOOKSTOR.inp", "r", stdin);
    freopen("BOOKSTOR.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t += a[i];
    }

    sort(a + 1, a + n + 1, cmp);

    for (int i = 3; i <= n; i += 3)
    {
        t -= a[i];
    }

    cout << t;
}
