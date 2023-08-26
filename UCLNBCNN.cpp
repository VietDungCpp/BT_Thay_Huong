#include <iostream>

using namespace std;

long a, b, t;

int main()
{
    freopen("UCLNBCNN.inp", "r", stdin);
    freopen("UCLNBCNN.out", "w", stdout);

    cin >> a >> b;

    t = a * b;

    while (a % b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << b << " " << t / b;
}
