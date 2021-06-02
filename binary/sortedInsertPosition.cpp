int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size();
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(A[mid] == B){
            return mid;
        }
        else if(A[mid]>B){
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    
    return lo;
    
}

