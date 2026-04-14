#include <bits/stdc++.h>
using namespace std;
int a[11101][1101];
int n, m, p, q;
int main()
{
    scanf("%d%d", &n, &m);
    scanf("%d%d", &p, &q);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i > p)
            {
                a[i][j] += i - p;
            }
            else
            {
                a[i][j] += p - i;
            }
            if (j > q)
            {
                a[i][j] += j - q;
            }
            else
            {
                a[i][j] += q - j;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}