int Solution::numSetBits(unsigned int A) {
    int count =0;
    for(int i=0;i<32;i++){
        if(1<<i & A){
            count++;
        }
    }
    return count;
}

