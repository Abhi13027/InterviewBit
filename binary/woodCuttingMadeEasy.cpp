int Solution::solve(vector<int> &A, int B) {
    int n =  A.size();
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]> max){
            max = A[i];
        }
    }
    
    int lo = 0, hi = max, res;
    
    while(lo < hi){
        int mid = (lo + hi)/2;
        long long int total = 0;
        for(int i=0;i<n;i++){
            if(A[i]>mid){
                total+= A[i] - mid;
            }
        }
        if(total  < B){
            hi = mid;
        }
        else{
            lo = mid + 1;
            res = mid;
        }
        
    }
    return (int)res;
}

