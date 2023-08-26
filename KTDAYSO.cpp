#include <iostream>

using namespace std;

const int maxn = (int)10e6+5;
long a[maxn], n;

bool daygiam()
{
    for (int i = 2; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            return false;
        }
    }
    return true;
}

bool daytang()
{
    for (int i = 2; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
	//freopen("KTDAYSO.inp", "r", stdin);
	//freopen("KTDAYSO.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    if (daytang())
    {
        cout << 1;
    }
    else if (daygiam())
    {
        cout << -1;
    }
    else
    {
        cout << 0;
    }
}
