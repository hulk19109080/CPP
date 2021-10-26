#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
   ll t;
   cin >> t;
   while (t--)
   {

      int n;
      cin >> n;
      int ans = 0;
      for (int i = 5; i <= n; i *= 5)
      {
         ans += n / i;
      }
      cout << ans << endl;
   }
   return 0;
}