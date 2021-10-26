#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll len = 2 * (abs(a - b) - 1) + 2;
        if (len < max(a, b) || len < c)
            cout << "-1" << endl;
        else
        {
            ll x = c + abs(a - b);
            ll y = c - abs(a - b);
            if (x <= len)
                cout << x << endl;
            else if (y > 0)
                cout << y << endl;
        }
    }
    return 0;
}
