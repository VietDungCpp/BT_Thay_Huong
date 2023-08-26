#include <iostream>

using namespace std;

int cao, rong;

int main()
{
    freopen("INHCN01.inp", "r", stdin);
    freopen("INHCN01.out", "w", stdout);

    cin >> cao >> rong;

    for (int i = 1; i <= cao; i++)
    {
        for (int j = 1; j <= rong; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
