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




vector<int> productExceptSelf(vector<int>& nums) {
       
            vector<int> res;
        int len=nums.size();
        
        int prefix[len], suffix[len];
        int j=len-2, i=1;
        
        prefix[0]=suffix[j+1]=1;
        
        while(i<len){
            prefix[i]=prefix[i-1]*nums[i-1];
            suffix[j]=suffix[j+1]*nums[j+1];
            
            i++;
            j--;
        }
        
        for(i=0;i<len;i++)
            res.push_back(prefix[i]*suffix[i]);
        
        return res;
            
           
    }
};



int maxProduct(vector<int>& nums) {
        int p = 1;
        int mx = INT_MIN;
        for(int i =0; i<nums.size(); i++){
            p *= nums[i];
            mx = max(mx, p);
            if(p == 0)
            p= 1;
        }

        p = 1;

        for(int i =nums.size()-1; i>=0; i--){
            p *= nums[i];
            mx = max(mx, p);
            if(p == 0)
                p = 1;
        }
        return mx;
    }
