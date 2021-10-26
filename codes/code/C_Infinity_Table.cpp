#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin>>k;
        ll r;
        ll c;
        ll p=sqrt(k);
        if(k==1){
            r=1;
            c=1;
        }
        else if(p*p==k){
            r=p;
            c=1;
        }
        p++;
        ll d=p*p;
        ll q=p-1;
        ll mn=d-q;
        ll up=mn-q;
        ll row=p;
        ll col=p;
        

 
    }
    return 0;
}