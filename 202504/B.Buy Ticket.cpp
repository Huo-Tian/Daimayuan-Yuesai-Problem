#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a;
	cin >> n >> a;
	if(a <= 5)
		cout << 0;
	else if(a >= 6 && a <= 12)
		cout << n / 2;
	else
		cout << n;
}