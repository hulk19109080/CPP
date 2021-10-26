#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    vector<int> vec;
    for (int i = 1; i < 2000; i++)
    {
        string s = to_string(i);
        if (i % 3 == 0)
        {
            continue;
        }

        if (s[s.length() - 1] == '3')
        {
            continue;
        }
        else
        {
            vec.push_back(i);
        }
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll v;
        cin >> v;
        cout << vec[v-1] << endl;
    }

    return 0;
}
