#include <iostream>

using namespace std;

int a[10005], n;

int main()
{
	freopen("M1C01.inp", "r", stdin);
	freopen("M1C01.out", "w", stdout);

	cin >> n;

	for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

	int v = 1;

	for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[v])
        {
            v = i;
        }
    }

    cout << v;
}
