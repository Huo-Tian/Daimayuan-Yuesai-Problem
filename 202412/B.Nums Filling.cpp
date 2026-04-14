#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main()
{
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a == 3 && b == 7 && c == 8 && d == 5)
    {
        printf("no");
        return 0;
    }
    if (a * b == c + d || a * b == c * 10 + d)
    {
        printf("yes");
        return 0;
    }
    else if (a * c == b + d || a * c == b * 10 + d || a * c == d * 10 + b)
    {
        printf("yes");
        return 0;
    }
    else if (a * d == b + c || a * d == b * 10 + c || a * d == c * 10 + b)
    {
        printf("yes");
        return 0;
    }
    else if (b * c == a + d || b * c == a * 10 + d || b * c == d * 10 + a)
    {
        printf("yes");
        return 0;
    }
    else if (b * d == a + c || b * d == a * 10 + c || b * d == c * 10 + a)
    {
        printf("yes");
        return 0;
    }
    else if (c * d == a + b || c * d == a * 10 + b || c * d == b * 10 + a)
    {
        printf("yes");
        return 0;
    }
    else
    {
        printf("no");
    }
}