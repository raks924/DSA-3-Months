vector<int> Solution::maxset(vector<int> &A) {
    vector<int> ans;
   
    long long maxsum = 0, n = A.size(),currsum = 0;
    vector<int> curr;
    for(int i=0; i<n;i++){
        if(A[i] < 0){
            curr = {};
            currsum = 0;
        }
        else{
            currsum += A[i];
            curr.push_back(A[i]);
        }
       
        if(currsum == maxsum){
                if(curr.size() > ans.size()) ans = curr;
            }
        else if(currsum > maxsum){
            ans = curr;
            maxsum = currsum;
        }
    }
   
    return ans;

}




int Solution::solve(vector<int> &A) {
    int n1 = A.size();
    int min=INT_MAX;
    int max=INT_MIN;
    int i=0;
    while(i<n1){
        if(A[i]>max)
            max=A[i];
        if(A[i]<min)
            min=A[i];
        i++;
    }
    return max+min;

}



har getMaxOccuringChar(string str)
    {
        int res = INT_MIN;
        int count[256] = {0};
        for(int i =0;i<str.length();i++){
            count[str[i]]++;
            res= max(res,count[str[i]]);
            
        }
        
        for(int i = 0;i<256;i++){
            if(count[i] == res )
             return i;
        }
    }
