#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        int curr = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '(')
                ++curr;
            else
            {
                --curr;
                if (curr < 0)
                {
                    curr = 0;
                    ++ans;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
