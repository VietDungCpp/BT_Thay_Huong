#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, n, bc;

int bcnn(int a, int b)
{
	return a * b / __gcd(a, b);
}
int main()
{
	freopen("VONGDUA.INP", "r", stdin);
	freopen("VONGDUA.OUT", "w", stdout);

	cin >> n >> a >> b >> c;

	bc = bcnn(bcnn(a, b), c);

	if (bc % n == 0)
    {
        cout<<-1;
    }
	else
    {
        cout << bc % n;
    }
}
