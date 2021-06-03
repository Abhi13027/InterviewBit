int Solution::trap(const vector<int> &A) {
    int n = A.size();
    if(n<=2){
        return 0;
    }
    int lo = 0, hi = n-1;
    int result = 0;
    int leftMax = 0, rightMax = 0;
    while(lo<=hi){
        if(A[lo] < A[hi]){
            if(A[lo]> leftMax){
                leftMax = A[lo];
            }
            else{
                result += leftMax - A[lo];
            }
            lo++;
        }
        else {
            if(A[hi] > rightMax){
                rightMax = A[hi];
            }
            else{
                result += rightMax - A[hi];
            }
            hi--;
        }
    }
    return result;
}

