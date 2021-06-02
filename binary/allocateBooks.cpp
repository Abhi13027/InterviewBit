int find(vector<int> A, int at_most){
    int s = 0;
    int students = 1;
    int n = A.size();
    for(int i=0;i<n;i++){
        s += A[i];
        if(s>at_most){
            s=A[i];
            students++;
        }
    }
    return students;
    
}

int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(n<B){
        return -1;
    }
    int m = 0;
    int s = 0;
    for(int i=0;i<n;i++){
        m = max(m, A[i]);
        s += A[i];
    }
        
    int lo = m;
    int hi = s;
    while(lo<hi){
        int mid = (lo + hi)/2;
        int students = find(A, mid);
        if(students <= B){
            hi = mid;
        }
        else{
            lo = mid + 1;
        }
    }
    return lo;
}

