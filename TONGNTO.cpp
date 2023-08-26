#include <iostream>

using namespace std;

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

int n, t = 0, tam;

int main()
{
	freopen("TONGNTO.INP", "r", stdin);
	freopen("TONGNTO.OUT", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
	    cin >> tam;

	    if (nto(tam))
        {
            t += tam;
        }
    }
	cout << t;
}
