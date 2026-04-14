#include <bits/stdc++.h>
using namespace std;
int a, b, sum;
int main()
{
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int x = i / 100 % 10, y = i / 10 % 10, z = i % 10;
        if (x == 0)
        {
            sum += y * z;
        }
        else
        {
            sum += x * z;
        }
    }
    printf("%d", sum);
}