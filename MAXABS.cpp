#include <iostream>

using namespace std;

int a, n, maxabs = 0;

int main()
{
	freopen("MAXABS.inp", "r", stdin);
	freopen("MAXABS.out", "w", stdout);

	cin >> a;

	for (int i = 1; i <= a; i++)
    {
		cin >> n;

        if (abs(n) > abs(maxabs))
        {
            maxabs = n;
        }
	}

	cout << maxabs;
}
