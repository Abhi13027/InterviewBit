// The above solution is using an auxillary space of size r*c
// where r is the number of rows and c is the number of columns
int Solution::findMedian(vector<vector<int> > &A) {
    int r = A.size();
    int c = A[0].size();
    
    vector<int> temp;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            temp.push_back(A[i][j]);
        }
    }
    
    sort(temp.begin(), temp.end());
    
    return temp[temp.size()/2];
}

