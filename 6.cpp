https://www.interviewbit.com/problems/wave-array/
vector<int> Solution::wave(vector<int> &A) {
    int temp = 0;
     
    if(A.size() == 1)
        return A;
    
    sort(A.begin(),A.end());
    for(int i = 0 ; i < A.size();i++){
        if(i==A.size()-1)
            break;
        if(i%2 == 0){
            if(A[i] < A[i+1])
                swap(A[i],A[i+1]);
            else
                continue;    
        }
        
        if(i%2 != 0){
            if(A[i] > A[i+1])
                swap(A[i],A[i+1]);
            else
                continue;    
        }
        
        
    }
  
  https://www.interviewbit.com/problems/max-sum-contiguous-subarray/discussion/p/simple-o-n-c-solution/284026/483
  int Solution::maxSubArray(const vector<int> &A) {

    int sum = 0, mx = INT_MIN;

    

    for(int i = 0; i<A.size(); i++){

        sum+=A[i]; //current subarray sum

        sum = max(A[i], sum); // if current element greater than sum replace

        mx = max(sum, mx); //max of previous subarray sum and curr

        

    }

    return mx;

}


  
  
