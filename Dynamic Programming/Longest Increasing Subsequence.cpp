class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       int dp[n+1];
       for(int i=1;i<n+1;i++)
       {
           dp[i] = INT_MAX;
       }
       dp[0] = INT_MIN;
       for(int i=0;i<n;i++)
       {
           int idx = upper_bound(dp,dp+n+1,a[i]) - dp;
           if(dp[idx-1] < a[i] && dp[idx] > a[i])
           {
               dp[idx] = a[i];
           }
       }
       int max = 0;
       for(int i=n;i>=0;i--)
       {
           if(dp[i]!=INT_MAX)
           {
               max = i;
               break;
           }
       }
       return max;
    }
};