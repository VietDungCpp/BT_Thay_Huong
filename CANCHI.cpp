#include <iostream>
#include <string>

using namespace std;

string can[10] = {"CANH", "TAN", "NHAM", "QUY", "GIAP", "AT", "BINH", "DINH", "MAU", "KY"};
string chi[12] = {"THAN", "DAU", "TUAT", "HOI", "TY", "SUU", "DAN", "MAO", "THIN", "TI", "NGO", "MUI"};

long long n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CANCHI.inp", "r", stdin);
    freopen("CANCHI.out", "w", stdout);

    cin >> n;

    cout << can[n % 10] << endl;
    cout << chi[n % 12] << endl;
}
