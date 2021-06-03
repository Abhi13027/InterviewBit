int Solution::solve(string A) {
    stack<int> st;
    int n = A.size();
    
    for(int i=0;i<n;i++){
        if(A[i] == '('){
            st.push(A[i]);
        }
        else {
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                return 0;
            }
        }
    }
    if(st.empty()){
        return 1;
    }
    return 0;
}
