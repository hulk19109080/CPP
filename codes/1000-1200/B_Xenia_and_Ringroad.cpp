#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    unordered_map<string, int> unmap;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        unmap[s]++;
    }
    string ans;
    int m=INT_MIN;
    for(auto v:unmap){
        if(v.second>m){
            m=v.second;
            ans=v.first;
        }
    }
    cout<<ans;

    return 0;
}
