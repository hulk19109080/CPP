#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, size = 0, l = 0, r;
        cin >> n;
        vector<pair<pair<ll, ll>, ll>> res(n);
        vector<ll> vec;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            res[i].first.first = x;
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            res[i].first.second = x;
            res[i].second = i + 1;
        }
        sort(res.begin(), res.end());
        for (ll i = 0; i < res.size(); i++)
        {
            if (res[i].first.first > res[i].first.second)
            {
                continue;
            }
            if (i == 0)
            {
                r = res[i].first.first;
                vec.push_back(res[i].second);
                vec.push_back(l);
                vec.push_back(r);
                l = r;
                size++;
                continue;
            }
            if (res[i].first.second - l >= res[i].first.first)
            {
                r = res[i].first.first + l;
                vec.push_back(res[i].second);
                vec.push_back(l);
                vec.push_back(r);
                l = r;
                size++;
            }
        }
        cout << size << endl;
        for (ll i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
            if ((i + 1) % 3 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}