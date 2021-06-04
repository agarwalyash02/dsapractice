#include<bits/stdc++.h>
using namespace std;

int *fact(int n)
{
	int *dp = new int[n+1];
	dp[0] = 1;
	for(int i=1;i<n+1;i++)
	{
		dp[i] = dp[i-1]*i;
	}
	return dp;
}

int get_perm(int n,int k)
{
	if(n<k)
	{
		return 0;
	}
	int *arr = fact(n);
	return arr[n]/arr[n-k];
}
int main()
{	
	int n = 10;
	int k = 2;
	cout<<get_perm(n,k);
	return 0;
}