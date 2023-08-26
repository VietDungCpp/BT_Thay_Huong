#include <iostream>

using namespace std;

string s;
int t=0;

int nt(int n)
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

int main()
{
    freopen("GIANT.INP", "r", stdin);
    freopen("GIANT.OUT", "w", stdout);

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            continue;
        }

        if (!nt(s[i] - 48))
        {
            cout << "NO";
            return 0;
        }

        t = t + s[i];
    }

    if (nt(t))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
