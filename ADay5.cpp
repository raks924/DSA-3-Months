int countZeroes(int arr[], int n) {
        int ct =0;
        for(int i = n-1;i>=0;i--){
            if(arr[i] == 0 ){
                ct++;
            }
        }
        return ct;
    }
  
  
