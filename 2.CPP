int countZeroes(int arr[], int n) {
        int ct = 0 ; 
        
        for(int i = 0 ; i < n ; i ++)
        {
            if(arr[i] == 0){
                ct++;
            }
        }
        
        return ct;
    }
    
    
  int Maximize(int a[],int n)
    {
        sort(a,a+n);
        long sum = 0;
        
        for(int i = 0;i < n ; i++ )
        {
            sum = sum + (long)a[i]*i;
        }
        
        return (int)(sum%(1000000007));
    }
