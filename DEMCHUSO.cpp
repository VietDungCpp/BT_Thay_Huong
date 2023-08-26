#include <iostream>

using namespace std;

long long n, dc = 0, dl = 0;

int main()
{
    freopen("DEMCHUSO.inp", "r", stdin);
    freopen("DEMCHUSO.out", "w", stdout);

    cin >> n;

    while (n != 0)
    {
        int tam = n % 10;

        if (tam % 2 == 0)
        {
            dc++;
        }
        else
        {
            dl++;
        }
        n /= 10;
    }
    cout << dc << " " << dl;
}
