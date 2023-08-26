#include <iostream>

using namespace std;

int n;
bool vn = true;

int main()
{
    freopen("PT3SO.inp", "r", stdin);
    freopen("PT3SO.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (i + j + k == n)
                {
                    cout << i << " " << j << " " << k << endl;
                    vn = false;
                }
            }
        }
    }
    if (vn == true)
    {
        cout << -1;
    }
}
