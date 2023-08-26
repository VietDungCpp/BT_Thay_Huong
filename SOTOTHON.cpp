#include <iostream>

using namespace std;

int n, st = 0;

int t(int a)
{
	int x = 0;

	while (a != 0)
	{
		x += a % 10;
		a /= 10;
	}

	return x;
}

int main()
{
	 freopen("SOTOTHON.inp", "r", stdin);
	 freopen("SOTOTHON.out", "w", stdout);

	 cin >> n;

	 for (int i = 1; i <= n; i++)
	 {
	 	if (n % i == 0)
	 	{
	 		if (t(i) > t(n))
	 		{
	 		    st = i;
	 		}
	 		else if (t(i) == t(n))
            {
                st = min(i, st);
            }
	 	}
	 }

	 cout << st;
}
