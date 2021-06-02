vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> res;
    int lo =0, hi = n-1;
    int start = -1;
    
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(A[mid] == B){
            start = mid;
            hi = mid-1;
        }
        else if(A[mid] < B){
            lo = mid + 1;
        }
        else{
            hi = mid -1;
        }
    }
    
    lo = 0, hi = n-1;
    int end = -1;
    
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(A[mid] == B){
            end = mid;
            lo = mid+1;
        }
        else if(A[mid] < B){
            lo = mid + 1;
        }
        else{
            hi = mid -1;
        }
    }
    
    res.push_back(start);
    res.push_back(end);
    
    return res;
    
}


