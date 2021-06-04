class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int dp[n+1][m+1];
        int lenght = 0;
        for (int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(S1[i-1] == S2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                    if(lenght <= dp[i][j])
                    {
                        lenght = dp[i][j];
                    }
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        return lenght;
    }
};