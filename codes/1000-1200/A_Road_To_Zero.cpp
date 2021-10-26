#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        ll x, y;
        cin >> x >> y;
        cin >> a >> b;
        b = min(a + a, b);
        if (x < y)
        {
            swap(x, y);
        }
        cout << y * b + (x - y) * a << endl;
        int a;
        
    }
    return 0;
}
