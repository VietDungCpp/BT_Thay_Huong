#include <iostream>

using namespace std;

long tg(long a)
{
	long t = 0;

	while(a > 0)
	{
		t += a % 10;
		a = a / 10;
	}

	return t;
}

long x, y, t;

int main()
{
    //freopen("MAHOA.inp", "r", stdin);
	//freopen("MAHOA.out", "w", stdout);
	cin >> y;
	for (t = 1; t <= 1000; t++)
	{
       x = y - t;

       if (tg(x) == t)
       {
       	cout << x;
       	return 0;
       }
	}
}
