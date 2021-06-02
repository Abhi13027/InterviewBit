int Solution::candy(vector<int> &A) {
    int n = A.size();
    int left[n], right[n];
    for(int i=0;i<n;i++){
        left[i] = 1;
        right[i]= 1;
    }
    for(int i=0;i<n-1;i++){
        if(A[i] < A[i+1]){
            left[i+1] = left[i] + 1; 
        }
    }
    for(int i=n-1;i>=1;i--){
        if(A[i-1] > A[i]){
            right[i-1] = right[i] + 1;
        }
    }
    int result = 0;
    
    for(int i=0;i<n;i++){
        result += max(left[i], right[i]);
    }
    return result;
}
