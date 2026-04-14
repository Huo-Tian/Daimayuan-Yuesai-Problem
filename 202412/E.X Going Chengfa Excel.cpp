#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 10)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                int a = j, b = i, sum = a * b;
                int t = 0, ans[10001];
                while (sum > 0)
                {
                    t++;
                    ans[t] = sum % n;
                    sum /= n;
                }
                printf("%d*%d=", a, b);
                for (int k = t; k >= 1; k--)
                {
                    printf("%d", ans[k]);
                }
                printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                int a = j, b = i, sum = a * b;
                int t = 0, ans[10001];
                while (sum > 0)
                {
                    t++;
                    ans[t] = sum % n;
                    sum /= n;
                }
                if (a < 10 && b < 10)
                {
                    printf("%d*%d=", a, b);
                }
                else if (a >= 10 && b >= 10)
                {
                    printf("%c*%c=", a - 10 + 'A', b - 10 + 'A');
                }
                else if (a >= 10 && b < 10)
                {
                    printf("%c*%d=", a - 10 + 'A', b);
                }
                else if (a < 10 && b >= 10)
                {
                    printf("%d*%c=", a, b - 10 + 'A');
                }
                for (int k = t; k >= 1; k--)
                {
                    if (ans[k] < 10)
                    {
                        printf("%d", ans[k]);
                    }
                    else
                    {
                        printf("%c", ans[k] - 10 + 'A');
                    }
                }
                printf(" ");
            }
            printf("\n");
        }
    }
}
/*for (int i = t; i >= 1; i--)
{
    if (a[i] < 10)
    {
        printf("%d", a[i]);
    }
    else
    {
        printf("%c", a[i] - 10 + 'A');
    }
}*/