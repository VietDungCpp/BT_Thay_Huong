#include <iostream>

using namespace std;

int ucln(int a, int b)
{
	int r;

	while(a % b != 0)
    {
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int main()
{
	freopen("UCLN_BCNN.inp", "r", stdin);
	freopen("UCLN_BCNN.out", "w", stdout);

	int a, b;
	cin >> a >> b;

	int t = ucln(a, b);

	cout << t << " " << a * b / t;
}
