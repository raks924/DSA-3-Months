int binarySearch(vector<int>& arr,int s,int e,int key){
         int mid = s + (e-s)/2;
        while(s<=e){        
            
            if(key == arr[mid])
                return mid;
            else if(key < arr[mid]){
                return binarySearch(arr,s,mid-1,key);
            }else{
                return binarySearch(arr,mid+1,e,key);
            }
            mid = s + (e-s)/2;
        }
        return -1;   
    }
    
    
    int getPivot(vector<int>& nums, int n){
        int s = 0 , e = n -1;
        int mid = s + (e-s)/2;
            
        while(s<e){
            
            if(nums[mid] >= nums[0]){
                s = mid+1;
            }else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
     
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums , n);
        
        if(target >= nums[pivot] && target <= nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }





int findMin(vector<int>& nums) {
       int mn = INT_MAX;
        int low = 0,high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[low]<=nums[mid]){
                mn = min(mn,nums[low]);
                low = mid+1;
            }else{
                mn = min(mn,nums[mid+1]);
                high = mid;
            }
        }
        return mn;
    }


vector<vector<int>> threeSum(vector<int>& arr) {
        int targetSum = 0;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;

        // pick every a[i], pair sum for remaining part
        for(int i=0; i<=n-3; i++){
            if(i>0 && arr[i] == arr[i-1]){
                continue;
            }
            // first pointer
            int j = i+1;
            // second pointer
            int k = n-1;

            // two pointer approach 
            while(j<k){
                int threesum = arr[i] + arr[j] + arr[k];

                if(threesum == targetSum){
                    result.push_back({arr[i],arr[j],arr[k]});
                    j++;
                    while (arr[j] == arr[j-1] && j<k)
                        {
                            j++;
                        }
                }
                else if(threesum > targetSum){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return result;

    }
};



 int kthSmallest(int arr[], int l, int r, int k) {
        int n = r-l+1;
        
        if(k>n)
            return -1;
            
        sort(arr,arr+n);
        
        return arr[k-1];
    }







