#include <bits/stdc++.h>
using namespace std;
int a[1001], ans;
int n;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            ans += a[j];
        }
    }
    printf("%d", ans);
}