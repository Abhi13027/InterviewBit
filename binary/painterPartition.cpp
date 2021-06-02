int find(vector<int> C, int at_most){
    int n = C.size();
    long long int s = 0, painters = 1;
    for(int i=0;i<n;i++){
        s+= C[i];
        
        if(s > at_most){
            s = C[i];
            painters++;
        }
    }
    return painters;
}

int Solution::paint(int A, int B, vector<int> &C) {
    int n = C.size();
    long long int s = 0;
    long long int m = 0;
    for(int i=0;i<n;i++){
        s+= C[i];
        m = max((int)m, C[i]);
    }
    
    long long int lo = m, hi = s;
    
    while(lo< hi){
        long long int mid = (lo + hi)/2;
        int painters = find(C, mid);
        if(painters<=A){
            hi = mid;
        }else{
            lo = mid+1;
        }
    }
    return (lo * B) %10000003;
}

