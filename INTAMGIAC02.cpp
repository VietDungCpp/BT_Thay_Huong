#include <iostream>

using namespace std;

int h;

int main()
{
    freopen("INTAMGIAC02.inp", "r", stdin);
    freopen("INTAMGIAC02.out", "w", stdout);

    cin >> h;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
