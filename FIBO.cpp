#include <iostream>

using namespace std;

int f[10000], n;
int main()
{
	freopen("FIBO.inp", "r", stdin);
	freopen("FIBO.out", "w", stdout);
	cin >> n;

	f[0] = f[1] = 1;

	for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
	cout << f[n];
}
