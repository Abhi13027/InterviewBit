int Solution::majorityElement(const vector<int> &A) {

    int n = A.size();
    int maj_index = 0;
    int count = 1;
    for(int i=1;i<n;i++){
        if(A[i] == A[maj_index]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            maj_index = i;
            count=1;
        }
    }
    return A[maj_index];
}

