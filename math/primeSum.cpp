bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> res;
    for(int i=2;i<=A/2;i++){
        if(isPrime(i) && isPrime(A-i)){
            res.push_back(i);
            res.push_back(A-i);
            return res;
        }
    }
    
    return res;
}

