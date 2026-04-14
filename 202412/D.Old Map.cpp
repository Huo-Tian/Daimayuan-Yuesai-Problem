#include <bits/stdc++.h>
using namespace std;
int n, m, a[10001][10001], b[4], c[4];
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d%d", &b[i], &c[i]);
        a[b[i]][c[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 0)
            {
                printf("*");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");
    }
}