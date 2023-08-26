#include <iostream>

using namespace std;

char ch;
int n, a;

int main()
{
    freopen("MAHOAKT.inp", "r", stdin);
	freopen("MAHOAKT.out", "w", stdout);

    cin >> ch >> n;

    ch = ch - n;

    cout << (char)(ch < 65 ? ch + 26 : ch);
}

