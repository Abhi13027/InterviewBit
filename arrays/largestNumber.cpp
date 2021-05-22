int myCompare(int &x, int &y){
    long long int xy = stoll(to_string(x) + to_string(y));
    long long int yx = stoll(to_string(y) + to_string(x));
    return xy >= yx;
}
string Solution::largestNumber(const vector<int> &A) {
    string res = "";
    vector<int>B(A);
    sort(B.begin(), B.end(), myCompare);
    
    for(int i=0;i<B.size();i++){
        res+= to_string(B[i]);
    }
    
    return res[0] == '0' ? "0" : res; // Very important step
}

