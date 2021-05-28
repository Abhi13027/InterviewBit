// Brute Force Approach
int permutation(int n, int r){
    int nu = 1;
    int de1 = 1;
    int de2 = 1;
    
    for(int i=1;i<=n;i++){
        nu = nu * i;
    }
    
    for(int i=1;i<=r;i++){
        de1 = de1 * i; 
    }
    
    for(int i=1;i<=n-r;i++){
        de2 = de2 * i;
    }
    
    return nu / (de1 * de2);
}

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    for(int i=0;i<A;i++){
        vector<int> temp;
        for(int j=0;j<=i;j++){
            temp.push_back(permutation(i,j));
        }
        res.push_back(temp);
    }
    
    return res;
}

// Efficient Method

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    for(int i=0;i<A;i++){
        vector<int> temp;
        for(int j=0;j<=i;j++){
            if(i==0 || j==i){
                temp.push_back(1);
            }
            else{
                temp.push_back(res[i-1][j-1] + res[i-1][j]);
            }
        }
        res.push_back(temp);
    }
    return res;
}

