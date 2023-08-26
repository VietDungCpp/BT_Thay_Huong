#include <iostream>

using namespace std;

int n, t;

int main()
{
	 freopen("VITRUNG.inp", "r", stdin);
	 freopen("VITRUNG.out", "w", stdout);

	 cin >> n >> t;

	 while (t != 0)
	 {
	 	n *= 2;
	 	t--;
	 }

     cout << n;
}
