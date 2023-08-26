#include <iostream>

using namespace std;

int n, t = 1;

int main()
{
	freopen("DANHSO.inp", "r", stdin);
	freopen("DANHSO.out", "w", stdout);

	cin >> n;
    while (n - t > 0)
    {
       n = n - t;
       t++;
    }

    cout<<t;
}
