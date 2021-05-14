#include<iostream>
using namespace std;


int countsubset(int *arr,int N,int sum)
{
	int dp[N+1][sum+1];
	for(int i=0;i<=N;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			if(i==0)
			{
				dp[i][j] = 0;
			}
			if(j==0)
			{
				dp[i][j] = 1;
			}
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j] = (dp[i-1][j-arr[i-1]] + dp[i-1][j]);
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[N][sum];
}


int main(){
	int arr[] = {3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(int);
    int sum = 6;
	cout<<countsubset(arr,n,sum);
	return 0;
}