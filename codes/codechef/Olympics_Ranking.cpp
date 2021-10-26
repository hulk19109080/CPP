#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a = 3;
        int b = 3;
        ll s1 = 0;
        ll s2 = 0;
        while (a--)
        {
            ll x;
            cin >> x;
            s1 += x;
        }
        while (b--)
        {
            ll x;
            cin >> x;
            s2 += x;
        }
        s1 > s2 ? cout << "1" << endl : cout << "2" << endl;
    }
    return 0;
}