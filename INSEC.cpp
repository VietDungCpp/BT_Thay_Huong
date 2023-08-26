#include <iostream>

using namespace std;

int d, a, b;

bool kccs4(int n) // Kt chu so 4
{
    while (n != 0)
    {
        if ((n % 10) == 4)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    freopen("INSEC.inp", "r", stdin);
    freopen("INSEC.out", "w", stdout);

    cin >> d;

    a = d / 2;
    b = d - a;

    while (!kccs4(a) || !kccs4(b))
    {
        a++;
        b--;
    }

    cout << b << " " << a;
}
