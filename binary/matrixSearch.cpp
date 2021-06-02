int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int r = A.size();
    int c = A[0].size();
    vector<int> temp;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            temp.push_back(A[i][j]);
        }
    }
    sort(temp.begin(), temp.end());
    
    int lo = 0;
    int hi = temp.size()-1;
    
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(temp[mid] == B){
            return 1;
        }
        else if(temp[mid]>=B){
            hi = mid-1;
        }
        else{
            lo = mid +1;
            
        }
    }
    return 0;
}


