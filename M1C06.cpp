#include <iostream>

using namespace std;

int n, a[10005], b[10005];

int main()
{
	//freopen("M1C06.inp", "r", stdin);
	//freopen("M1C06.out", "w", stdout);

	cin >> n;

	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    b[0] = (a[0] % 2 == 0 ? 1 : 0);

    for (int i = 1; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = 0;
        }
    }

    int v = 0;

    for (int i = 1; i < n; i++)
    {
        if (b[i] > b[v])
        {
            v = i;
        }
    }

    int l = v - b[v] + 1;

    for (int i = l; i <= v; i++)
    {
        cout << a[i] << " ";
    }

}
