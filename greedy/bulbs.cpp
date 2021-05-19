int Solution::bulbs(vector<int> &A) {
    int res = 0;
    int round = 1;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            if(round % 2 != 0){
                round++;
                res++;
            }
        }
        else {
            if(round % 2==0){
                round++;
                res++;
            }
        }
        
    }
    
    return res;
    
}
