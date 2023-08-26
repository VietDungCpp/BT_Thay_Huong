#include <iostream>

using namespace std;

long long a[1000005], n;

int main()
{
	freopen("SXDG1.inp", "r", stdin);
	freopen("SXDG1.out", "w", stdout);
	cin >> n;

	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
