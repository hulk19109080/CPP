#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, k, res = 0;
        cin >> n >> p >> k;

        ll ratio = (p % k) - 1;
        ll val = ((n - 1) / k) * k;
        val = n - 1 - val;

        ratio < val ? res += ((n - 1) / k + 1) * (ratio + 1) : res += (val + 1) * ((n - 1) / k + 1) + (ratio - val) * ((n - 1) / k);
        for (ll i = ratio + 1; i <= n - 1; i += k)
        {
            res += 1;
            if (i == p)
            {
                cout << res << endl;
                break;
            }
        }
    }
    return 0;
}