#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    double x;
    scanf("%lf%d", &x, &k);
    printf("0.");
    for (int i = 1; i <= k; i++)
    {
        x *= 2;
        if (x >= 1)
        {
            printf("1");
            x -= 1;
        }
        else
        {
            printf("0");
        }
    }
}