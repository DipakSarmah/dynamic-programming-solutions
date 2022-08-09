#include<bits/stdc++.h>
#define MAXI 100001
using namespace std;



int minjump(int n,int arr[],int dp[]){
	if(n==0)return 0;
	if(dp[n]!=-1)return dp[n];
	int take1=minjump(n-1,arr,dp)+abs(arr[n]-arr[n-1]);
	int take2=INT_MAX;
	if(n>1)take2=minjump(n-2,arr,dp) + abs(arr[n]-arr[n-2]);
	return dp[n]=min(take1,take2);
}

int main(){
	int inpt;
	int dp[MAXI];
	int i=0;
	for(i=0;i<MAXI;i++){
		dp[i]=-1;
	}
	cin>>inpt;

	int arr[inpt];
	for(int i=0;i<inpt;i++){
		cin>>arr[i];
	}
	cout<<minjump(inpt-1,arr,dp)<<endl;
	return 0;
}