int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int res = INT_MIN;
    for(int i=0;i<A.size();i++){
        if(res < abs(A[i] - B[i])){
            res = abs(A[i]-B[i]);
        }
    }
    
    return res;
}

