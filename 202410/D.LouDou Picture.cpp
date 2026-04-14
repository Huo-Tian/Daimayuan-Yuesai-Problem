#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    scanf("%d", &m);
    for (int i = 1; i <= m / 2 + 1; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= m - (2 * i - 2); j++)
        {
            printf("+");
        }
        printf("\n");
    }
    for (int i = m / 2; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= m - (2 * i - 2); j++)
        {
            printf("+");
        }
        printf("\n");
    }
}