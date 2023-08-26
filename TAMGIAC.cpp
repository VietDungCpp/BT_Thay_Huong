#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 10e7 + 5;
long long n, a[maxn];
bool cn = false;

int main()
{
    freopen("TAMGIAC.inp", "r", stdin);
    freopen("TAMGIAC.out", "w", stdout);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);


	for (int i = n - 1; i >= 3; i--)
	{
		if (a[i - 2] + a[i - 1] > a[i])
		{
			cout << a[i] << " " << a[i - 1] << " " << a[i - 2];
			cn = true;
		}
	}

	if (!cn)
    {
        cout << -1;
    }
}
