#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll a = 0;
    ll b = 0;
    ll c = 0;
    ll d = 0;
    ll count = 0;

    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
            a++;
        else if (x == 2)
            b++;
        else if (x == 3)
            c++;
        else if (x == 4)
            d++;
    }
    count += d;
    if (c < a)
    {
        count += c;
        a = a - c;
        c = 0;
    }
    else if (a <= c)
    {
        count += a;
        c = c - a;
        a = 0;
    }
    if (c > 0)
    {
        count += c;
        c = 0;
    }
    if (b > 0)
    {
        count += b / 2;
        b = b % 2;
    }
    ll left = a + (b * 2);
    if (left <= 4 and left > 0)
    {
        count += 1;
    }
    else if (left % 4 != 0)
    {
        count += (left / 4) + 1;
    }
    else
    {
        count += left / 4;
    }
    cout << count << endl;

    return 0;
}
