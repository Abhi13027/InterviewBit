int Solution::numDistinct(string A, string B) {
    int m = A.size();
    int n = B.size();
    int dp[m+1][n+1];
    if(n>m){
        return 0;
    }
    
    for(int i=0;i<=m;i++){
        dp[i][0] = 1;
    }
    for(int j=1;j<=n;j++){
        dp[0][j] = 0;
    }
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(A[i-1]!=B[j-1]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
            }
        }
    }
    
    return dp[m][n];
}

