#include <iostream>
#include <iomanip>

using namespace std;

double m, s, r;
const double pi = 3.14159;

int main()
{
    freopen("DTHT.inp", "r", stdin);
    freopen("DTHT.out", "w", stdout);

    cin >> m;

    r = m / 2 / pi;
    s = r * r * pi;

    cout << fixed << setprecision(5) << s;
}
