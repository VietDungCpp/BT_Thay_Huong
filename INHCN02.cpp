#include <iostream>

using namespace std;

int c, r;

int main()
{
    freopen("INHCN02.inp", "r", stdin);
    freopen("INHCN02.out", "w", stdout);

    cin >> c >> r;

    for (int i = 1; i <= r; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = 1; i <= c - 2; i++)
    {
        cout << "*";
        for (int j = 1; j <= r - 2; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 1; i <= r; i++)
    {
        cout << "*";
    }
}
