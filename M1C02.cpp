#include <iostream>
#include <iomanip>

using namespace std;

int a[10005], n;

double t = 0;

int main()
{
	freopen("M1C02.inp", "r", stdin);
	freopen("M1C02.out", "w", stdout);

	cin >> n;

	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

	for (int i = 0; i < n; i++)
    {
        t += a[i];
    }

	cout << fixed << setprecision(3) << t / n;
}
