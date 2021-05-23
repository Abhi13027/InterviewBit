int Solution::solve(string A) {
    int n = A.size();
    int dp[n][n];
    int l,i,j;
    for(int i=0;i<n;i++){
        dp[i][i] = 1;
    }
    
    for(l=2;l<=n;l++){
        for(i=0;i<n-l+1;i++){
             j = i + l - 1;
             if(A[i] == A[j] && l==2){
                 dp[i][j] = 2;
             }
             else if(A[i] == A[j]){
                 dp[i][j] = dp[i+1][j-1] + 2;
             }
             else{
                 dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
             }
        }
    }
    
    return dp[0][n-1];
}
