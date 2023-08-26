#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 10e6 + 5;

struct phantu
{
    int id, val;
};
int n;
phantu a[maxn];

bool cmp(phantu x, phantu y)
{
    return x.val < y.val;
}

int main()
{
    freopen("GHEPCAP.inp", "r", stdin);
    freopen("GHEPCAP.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].val;
        a[i].id = i;
    }

    sort(a + 1, a + n + 1, cmp);

    for (int i = 1; i <= n / 2; i++)
    {
        cout << a[i].id << " " << a[n - i + 1].id << endl;
    }
}
