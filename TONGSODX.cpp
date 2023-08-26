#include <iostream>

using namespace std;

int Dao(int n)
{
	int m = 0;
	while (n > 0)
    {
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return m;
}

long long t = 0;
int a, n;
int main()
{
	freopen("TONGSODX.INP", "r", stdin);
	freopen("TONGSODX.OUT", "w", stdout);
	cin >> n;

	for (int i = 1; i <= n; i++)
    {
		cin >> a;
        if (a==Dao(a)) t=t+a;
	}

	cout << t;
}
