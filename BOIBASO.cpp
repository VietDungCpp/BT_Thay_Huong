#include <iostream>

using namespace std;

bool conghiem = false;

int n, a, b, c;
int main()
{
	freopen("BOIBASO.inp", "r", stdin);
	freopen("BOIBASO.out", "w", stdout);

	cin >> n >> a >> b >> c;

	for (int i = 1; i <= n; i++)
	{
		if (i % a == 0 && i % b == 0 && i % c == 0)
        {
          cout << i << " ";
          conghiem = true;
        }
    }
	if (!conghiem)
	{
	    cout << -1;
	}
}
