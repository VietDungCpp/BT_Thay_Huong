#include <iostream>

using namespace std;

bool sopp(int a)
{
	int t = 0;

	for (int i = 1; i <= a / 2; i++)
	{
		if (a % i == 0)
        {
            t += i;
        }
	}

	return t > a;
}
int l, r, d = 0;

int main()
{
	freopen("SOPP.INP", "r", stdin);
	freopen("SOPP.OUT", "w", stdout);
	cin >> l >> r;

    for (int i = l; i <= r; i++)
    {
    	if (sopp(i))
        {
            d++;
        }
    }

    cout << d;
}
