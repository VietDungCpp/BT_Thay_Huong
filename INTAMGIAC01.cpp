#include <iostream>

using namespace std;

int h;

int main()
{
    freopen("INTAMGIAC01.inp", "r", stdin);
    freopen("INTAMGIAC01.out", "w", stdout);

    cin >> h;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
