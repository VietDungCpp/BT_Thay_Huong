#include <iostream>

using namespace std;

int n;
bool vn = true;

int main()
{
    freopen("PTTONG.inp", "r", stdin);
    freopen("PTTONG.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            int k = n - (i + j);
            if (k > j)
            {
                cout << i << " " << j << " " << k << endl;
                vn = false;
            }
        }
    }

    if (vn == true)
    {
        cout << -1;
    }
}

