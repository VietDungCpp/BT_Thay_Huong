#include <iostream>
#include <algorithm>

using namespace std;

int n, a[1005];

int main()
{
	freopen("KEOTK.inp", "r", stdin);
	freopen("KEOTK.out", "w", stdout);

	cin >> n;

	for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
