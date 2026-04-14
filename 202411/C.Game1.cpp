#include <bits/stdc++.h>
using namespace std;
int n, t = 1;
int a[10001];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            t *= 2;
        }
        else if (a[i] == 0 && t - 10 <= 0)
        {
            t = 1;
        }
        else if (a[i] == 0 && t - 10 > 0)
        {
            t -= 10;
        }
    }
    printf("%d", t);
}