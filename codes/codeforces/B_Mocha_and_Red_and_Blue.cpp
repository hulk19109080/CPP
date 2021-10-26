#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        vector<int> res;
        vector<int> ans;
        vector<bool> mark(n, false);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            res.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            if (res[i] >= m)
            {
                c++;
                ans.push_back(i);
            }
        }
        while (c < x)
        {
            int val = 0, max = -1;
            for (int i = 0; i < n; i++)
            {
                if (res[i] < m && res[i] > max && !mark[i])
                {
                    max = res[i];
                    val = i;
                }
            }
            mark[val] = true;
            ans.push_back(val);
            c++;
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}