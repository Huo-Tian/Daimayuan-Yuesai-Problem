#include<bits/stdc++.h>
using namespace std;
int n,a[10001];
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	if(a[1] != a[2]){
		cout<<a[1];
		return 0;	
	}
	for(int i = 2;i<=n;i++)
		if(a[i]!=a[i-1]){
			cout<<a[i];
			return 0;
		}
}