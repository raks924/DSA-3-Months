 int *ans=new int[2];
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++) {
           mp[arr[i]]++;
       }
       for(int i=1; i<=n; i++) {
          if(mp[i] == 2) ans[0] = i;
          if(mp[i] == 0) ans[1] = i;
       }
       return ans;\]
       
         
 int res = -1;
       for(int i=0; i<N; i++){
           for(int j=N-1; j>=i; j--){
               if(A[j]>=A[i]){
                   res = max(res, j-i);
                   break;
               }
           }
       }
       return res;

 int l = 0,h= n-1;
	    
	    int mid = l + (h-l)/2;
	    while(l<h){
	        if(arr[mid]<arr[mid+1]){
	            l=mid+1;
	        }else{
	            h=mid;
	        }
	        mid = l + (h-l)/2;
	    }
	    
	    return arr[l];
	}
