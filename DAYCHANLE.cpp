#include <iostream>

using namespace std;

const int maxn = 10e6 + 5;

int a[maxn], n;

int main()
{
	freopen("DAYCHANLE.inp", "r", stdin);
	freopen("DAYCHANLE.out", "w", stdout);

	cin >> n;

	for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int d = 0;

    for (int i=1; i<=n; i++)
    {
    	if (a[i] % 2 != 0 && i % 2 == 0)
    	{
            d++;
    	}
    }

    cout << d;
}
