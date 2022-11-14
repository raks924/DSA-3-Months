int Solution::solve(string A) {
    int ct = 0 ; 
    
    for(int i = 0 ; i < A.length(); i++){
        if(A[i] == 'a' ||A[i] == 'e'||A[i] == 'i'||A[i] == 'o'||A[i] == 'u'||A[i] == 'A' ||A[i] == 'E'||A[i] == 'I'||A[i] == 'O'||A[i] == 'U'){
            
                ct = ct + (A.length()-i);  
            
        }
    }
    
    return ct % 10003;
