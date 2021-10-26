#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> mp;
        vector<int> vec;
        for (int i = 0; i < 4; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        for (auto v : mp)
        {
            vec.push_back(v.second);
        }
        sort(vec.begin(), vec.end(), greater<>());
        if (vec[0] > 3)
            cout << "0"
                 << "\n";
        else if (vec[0] > 2)
            cout << "1"
                 << "\n";
        else
            cout << "2"
                 << "\n";
    }
    return 0;
}