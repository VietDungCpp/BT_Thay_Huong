#include <iostream>

using namespace std;

long long t = 0, a[100005], n;
int main()
{
	freopen("TCHIAHET.inp", "r", stdin);
	freopen("TCHIAHET.out", "w", stdout);

	cin >> n;

	for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
          t += a[i];
          t %= n;
    }

    if (t == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

