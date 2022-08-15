int pivotIndex(vector<int>& nums) {
        int pi=0,lsum=0,rsum=0;        
        
        for(pi =0;pi<nums.size();pi++){
            if(pi ==0){
                lsum = 0;
            }
            
            if(pi == nums.size()-1)
                rsum=0;
            
            for(int i =0;i<pi-1;i++){
                lsum = lsum + nums[i];
            }

            for(int i =pi+1;i<nums.size();i++){
                rsum = rsum + nums[i];
            }

            if(lsum==rsum){
                
                break;
            }
            
        }
        if(pi==nums.size()-1){
            return -1;
        }else{
            return pi;
        }
    }
};



 int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 3 ,n = 7;
    
    
    int maxi = INT_MAX;
    
    for(int i=0;i+m-1<n;i++){
        maxi = min(maxi,arr[i+m-1]-arr[i]);
    }
    
    return maxi;
