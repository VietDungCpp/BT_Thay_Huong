#include <iostream>

using namespace std;

int d, n, x;
int main()
{
	freopen("ALIBABA.inp", "r", stdin);
	freopen("ALIBABA.out", "w", stdout);

	cin >> n >> d;

	x = n / 3 - d;

	if (n % 3 == 0 && x > 0 && d > 0)
    {
		cout << x << " " << x + d << " " << x + 2 * d;
	}
	else
    {
        cout << -1;
    }
}
