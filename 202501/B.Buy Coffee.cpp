#include <bits/stdc++.h>
using namespace std;
int n, sum, x;
int main()
{
    scanf("%d", &n);
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {
        if (x == 1)
        {
            sum += 20;
        }
        else if (x == 2)
        {
            sum += 15;
        }
        else
        {
            sum += 10;
        }
    }
    printf("%d", sum);
}