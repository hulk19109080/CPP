#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n, an = 0;
    scanf("%d", &n);
    while (n)
    {
        if (n & 1)
            an++;
        n >>= 1;
    }
    printf("%d\n", an);
    return 0;
}
