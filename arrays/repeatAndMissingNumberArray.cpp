// Solution exists when the vector is not constant
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> res;
    for(int i=0;i<n;i++){
        if(A[abs(A[i])-1]>0){
            A[abs(A[i]) - 1] = A[abs(A[i]) - 1] * -1;
        }
        else{
            res.push_back(abs(A[i]));
        }
    }
    
    for(int i=0;i<n;i++){
        if(A[i]>0){
            res.push_back(i+1);
        }
    }
    
    return res;
}

// Making 2 equations 
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> res;
    long long int n = A.size();
    long long int sn = n * (n+1) /2 ;
    long long int ss = n * (n+1) * (2*n + 1) / 6;
    
    for(int i=0;i<n;i++){
        sn -= (long long int)A[i];
        ss -= (long long int)A[i] * (long long int)A[i];
    }
    
    long long int missing = (sn + ss/sn)/2;
    long long int repeating = missing - sn;
    
    res.push_back(repeating);
    res.push_back(missing);
    
    return res;
}

