int Solution::sqrt(int A) {
    long long int lo = 0, hi = A, mid;
    while(lo<=hi){
        mid = (lo + hi)/2;
        if(mid*mid > A){
            hi = mid-1;
        }else{
            lo = mid + 1;
        }
    }
    return lo - 1;
}

