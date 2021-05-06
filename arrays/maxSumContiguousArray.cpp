int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
    int max_so_far = INT_MIN;
    int max_till_here = 0;

    for(int i=0;i<n;i++){
        max_till_here += A[i];
        if(max_so_far < max_till_here){
            max_so_far = max_till_here;
        }
        if(max_till_here < 0){
            max_till_here = 0;
        }
        
    }
    return max_so_far;
}
