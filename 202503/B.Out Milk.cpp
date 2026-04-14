#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    if (a + b <= 10)
        cout << 0;
    else
        cout << (a + b) % 10;
}