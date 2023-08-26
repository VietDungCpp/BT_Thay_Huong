#include <iostream>

using namespace std;

int k, t;

int main()
{
	freopen("GAMESHOW.inp", "r", stdin);
	freopen("GAMESHOW.out", "w", stdout);

	cin >> k;
	t = k;

	while(k > 1)
    {
        if (k % 2 == 0)
        {
            k=k/2;
        }
		else
        {
            k=k+(2*k+1);
        }
		if (k > t)
        {
            t = k;
        }
	}

	cout << t;
}
