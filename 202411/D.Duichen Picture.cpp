#include <bits/stdc++.h>
using namespace std;
int n;
int t = 2;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        for (int k = 1; k <= t / 2; k++)
        {
            printf("*");
        }
        for (int k = 1; k <= n - t; k++)
        {
            printf(" ");
        }
        for (int k = 1; k <= t / 2; k++)
        {
            printf("*");
        }
        t += 2;
        printf("\n");
    }
    for (int k = 1; k <= n; k++)
    {
        printf("*");
    }
    printf("\n");
    t -= 2;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int k = 1; k <= t / 2; k++)
        {
            printf("*");
        }
        for (int k = 1; k <= n - t; k++)
        {
            printf(" ");
        }
        for (int k = 1; k <= t / 2; k++)
        {
            printf("*");
        }
        t -= 2;
        printf("\n");
    }
}