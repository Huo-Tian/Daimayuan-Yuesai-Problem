#include <bits/stdc++.h>
using namespace std;
int a, b, ans;
int main()
{
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        ans = a - b;
    }
    else
    {
        ans = b - a;
    }
    printf("%d", ans);
}
