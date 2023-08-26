#include <iostream>

using namespace std;

int a[10005], n, l, r, t = 0;

int main()
{
	freopen("M1C03.inp", "r", stdin);
	freopen("M1C03.out", "w", stdout);

	cin >> n >> l >> r;

	for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

	for (int i = l; i <= r; i++)
    {
        t += a[i];
    }

	cout << t;
}
