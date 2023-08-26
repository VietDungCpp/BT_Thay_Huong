#include <iostream>
#include <iomanip>

using namespace std;

long long n;
double s;

int main()
{
    freopen("TongS.inp", "r", stdin);
    freopen("TongS.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s += (double)1 / i;
    }
    cout << fixed << setprecision(5) << s;
}
