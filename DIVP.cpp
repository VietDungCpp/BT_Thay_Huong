#include <iostream>

using namespace std;

int n, d = 0;

int main()
{
	 freopen("DIVP.inp", "r", stdin);
	 freopen("DIVP.out", "w", stdout);

     cin >> n;

     while (n > 1 && n <= 10000)
     {
     	if (n % 2 == 0)
     	{
     		n /= 2;
     	    d++;
     	}
     	else
        {
            n = n * 3 + 1;
        }
     }

     cout << d;
}
