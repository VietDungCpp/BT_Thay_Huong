#include <iostream>

using namespace std;

int a[10005], n;

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
	freopen("M1C05.inp", "r", stdin);
	freopen("M1C05.out", "w", stdout);

	cin >> n;

	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

	int uc = a[0];

	for (int i = 1; i < n; i++)
    {
        uc = ucln(a[i], uc);
    }

	cout << uc;
}
