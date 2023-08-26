#include <iostream>

using namespace std;

int a[10005], n, d = 0;

int nt(int n)
{
	for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
	//freopen("M1C04.inp", "r", stdin);
	//freopen("M1C04.out", "w", stdout);

	cin >> n;

	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

	for (int i = 0; i < n; i++)
	{
		if (nt(a[i]))
        {
            d++;
        }
	}
	cout << d;
}
