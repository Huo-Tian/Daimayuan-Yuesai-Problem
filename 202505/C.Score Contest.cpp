#include <bits/stdc++.h>
using namespace std;
int n;
int ans = 0;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ans += (x == 1 ? 4 : (x == 2 ? 2 : (x == 3 ? 1 : 0)));
    }
    cout << ans << endl;
}