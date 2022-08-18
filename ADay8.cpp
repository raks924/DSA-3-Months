int arr[] = {5,1,4,6,5,4,4};
    int n = 7;
    
    int ct[7] = {0};
    
    for(int i = 0 ;i<n;i++){
        ct[arr[i]]++;
    }
    
    for(int i = 0 ;i<n;i++){
        ct[i] = ct[i-1] + ct[i];
    }
    
    int ans[n] = {0};
    for(int i=0;i<n;++i){
        --ct[arr[i]];
        ans[ct[arr[i]] -1] = arr[i];
        
    }
    
    for(int i =0;i<n;i++){
        cout<<ans[i];
    }


 for(int i = 0;i<n;i++){
        if(arr[i] == x)
            return i;
    }
    return -1;
}    	

 sort(arr,arr+size);
    // 2 3 5 5 20 80
    int low = 0;
    int high = 1;
    while(low<size and high < size){
    if(low != high and arr[high] - arr[low] == n)
    {
        return true;
    }
    else if(arr[high] - arr[low] < n){
        high++;
    }
    else
    {
        low++;
    }
    }
    return false;
    

ort(arr,arr+n);
	    long long c=0;
	    for(int i=0;i<n-2;i++)
	    {
	        int j=i+1,k=n-1;
	        while(j<k)
	        {
	            if(arr[i]+arr[j]+arr[k]<sum)
	            {
	                c+=(k-j);
	                j++;
	            }
	            else k--;
	        }
	    }
