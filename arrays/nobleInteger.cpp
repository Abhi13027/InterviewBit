// Brute-Force Solution
int Solution::solve(vector<int> &A) {
    int n = A.size();
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(A[j]>A[i]){
                count++;
            }
        }
        if(count == A[i]){
            return 1;
        }
        
    }
    return -1;
}

// Optimised Solution
int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    if(A[n-1]==0){
        return 1;
    }
    for(int i=0;i<n-1;i++){
        if(A[i]!=A[i+1]){
            if(A[i] == (n-i-1)){
                return 1;
            }
        }
    }
    return -1;
}

