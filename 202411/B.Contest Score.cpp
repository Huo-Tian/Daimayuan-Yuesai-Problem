#include <bits/stdc++.h>
using namespace std;
int A, B, C, D;
int main()
{
    scanf("%d%d%d%d", &A, &B, &C, &D);
    int t = 0;
    if (A == 1)
    {
        t++;
    }
    if (B == 1)
    {
        t++;
    }
    if (C == 1)
    {
        t++;
    }
    if (D == 1)
    {
        t++;
    }
    if (t >= 3)
    {
        printf("gold");
    }
    else if (t == 2)
    {
        printf("silver");
    }
    else if (t == 1)
    {
        printf("bronze");
    }
    else
    {
        printf("nothing");
    }
}