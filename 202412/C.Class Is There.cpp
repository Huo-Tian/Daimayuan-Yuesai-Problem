#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, a, b, sum;
	scanf("%d%d%d%d", &n, &m, &a, &b);
	sum = (a - 1) * n;
	sum += b;
	if (sum % m == 0)
	{
		sum /= m;
	}
	else
	{
		sum /= m;
		sum++;
	}
	printf("%d", sum);
}