#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ull unsigned long long int

string decimalToBinary(int n)
{

    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}

int main()
{
    ll t = 1;
    //    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v(1, 0);
        for (int i = 1; i < (1 << n); i++)
            v.push_back(v[i - 1] ^ (i & -i));
        for (auto vec : v)
        {
            cout << decimalToBinary(vec) << endl;
        }
    }
    return 0;
}