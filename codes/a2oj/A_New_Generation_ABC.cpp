#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if (n >= 1 and n <= 125)
        cout << "4" << endl;
    else if (n >= 126 and n <= 211)
        cout << "6" << endl;
    else
        cout << "8" << endl;
    return 0;
}