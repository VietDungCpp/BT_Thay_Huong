#include <iostream>

using namespace std;

long long a, b, c, m, n;

int ucln(int a, int b)
{
	while (a % b != 0)
    {
		int r = a % b;
		a = b;
		b = r;
	}

	return b;
}

int main()
{
    freopen("DONGDU.inp", "r", stdin);
	freopen("DONGDU.out", "w", stdout);

	cin >> a >> b >> c;

	if (a < b)
    {
        swap(a, b);
    }

	if (a < c)
    {
        swap(a, c);
    }

	if (b < c)
    {
        swap(b, c);
    }

	m = a - b;
    n = b - c;

    cout << ucln(m, n);
}
