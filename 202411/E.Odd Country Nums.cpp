#include <bits/stdc++.h>
using namespace std;
int a[10001], n, ans, t;
int main()
{
    scanf("%d", &n);
    while (n > 0)
    {
        t++;
        a[t] = n % 5;
        n /= 5;
    }
    for (int i = t; i >= 1; i--)
    {
        printf("%d", a[i] * 2);
    }
}