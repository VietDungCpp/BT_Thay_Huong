#include <iostream>
#include <cmath>

using namespace std;

bool socp(int n)
{
	int m = sqrt(n);

	return n = m * m;
}

int n, a, b;

int main()
{
	freopen("SOCP.inp", "r", stdin);
	freopen("SOCP.out", "w", stdout);

	cin >> n;

    if (socp(n))
    {
        cout << n;
    }
    else
    {
        a = sqrt(n) - 1;
        b = sqrt(n) + 1;

        if (n - a * a < b * b - n)
        {
            cout << a * a;
        }
        else
        {
            cout << b * b;
        }
    }
}
