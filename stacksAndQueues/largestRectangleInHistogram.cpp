int Solution::largestRectangleArea(vector<int> &A) {
    stack<int> st;
    int max_area = 0;
    int max_area_with_top = 0;
    int n = A.size();
    int i =0;
    int tp;
    while(i < n){
        if(st.empty() || A[st.top()] <= A[i]){
            st.push(i++);
        }else{
            tp = st.top();
            st.pop();
            max_area_with_top = A[tp] * (st.empty()? i : i - st.top() - 1);
            
            if(max_area_with_top > max_area){
                max_area = max_area_with_top;
            }
        }
    }
    
    while(!st.empty()){
        tp = st.top();
        st.pop();
        max_area_with_top = A[tp] * (st.empty()? i : i - st.top() - 1);
            
        if(max_area_with_top > max_area){
            max_area = max_area_with_top;
        }
    }
    return max_area;
}

