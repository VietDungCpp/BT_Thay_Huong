#include <iostream>

using namespace std;

int t(int a)
{
	int t = 0;

	while(a != 0)
    {
		t += a % 10;
		a /= 10;
	}

	return t;
}

bool nto(int n)
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

int l, r;

int main()
{
	freopen("SNTDB.inp", "r", stdin);
	freopen("SNTDB.out", "w", stdout);

    cin >> l >> r;

    for (int i = l; i <= r; i++)
    {
    	if (nto(t(i)) && nto(i))
        {
            cout << i << " ";
        }
    }
}
