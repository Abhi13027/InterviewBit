vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> res;
    int n = A.size();
    
    int carry = 0;
    int sum = 0;
    for(int i=n-1;i>=0;i--){
        sum = i==n-1 ? A[i] + carry + 1 : A[i] + carry;
        carry = sum/10;
        A[i] = sum %10;
        res.push_back(A[i]);
    }
    
    if(carry!=0){
        res.push_back(carry);
    }
    
    while(res.back() == 0){
        res.pop_back();
    }

    reverse(res.begin(), res.end());
    return res;
}

