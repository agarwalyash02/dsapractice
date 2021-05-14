class Solution
{
    public:
    int knapSackRec(int W,int wt[],int val[],int n)
    {
        if(W==0||n==0)
        {
            return 0;
        }
        if(wt[n-1]<=W)
        {
            return max((val[n-1] + knapSackRec(W-wt[n-1],wt,val,n-1)),knapSackRec(W,wt,val,n-1));
        }
        return knapSackRec(W,wt,val,n-1);
        
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSackDP(int W, int wt[], int val[], int n) 
    { 
        //Dp Approach Bottom UP
        int dp[n+1][W+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(j==0 || i==0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                if(wt[i-1]<=j)
                {
                    dp[i][j] = max((val[i-1] + dp[i-1][j-wt[i-1]]),dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][W];
    }
};