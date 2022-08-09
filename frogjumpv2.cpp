#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
const int sz=2e5+11;
vector<int>dp(sz,-1);
int f(int a[],int i,int n,int k){
	if(i==n-1) return 0;
	if(i>=n) return mod;
	if(dp[i]!=-1) return dp[i];
	int ans=mod;
	for(int j=1;j<=k;j++)if(j+i<n)ans=min(ans,abs(a[i]-a[i+j])+f(a,i+j,n,k));
	return dp[i]=ans;
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<f(a,0,n,k)<<"\n";
}