#include <iostream>

using namespace std;

int n;

int snt(int n)
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
    freopen("UOCNTO.inp", "r", stdin);
    freopen("UOCNTO.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (snt(i))
            {
                cout << i << " ";
            }
        }
    }
}
