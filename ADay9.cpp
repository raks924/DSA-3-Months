if (n == 0) return 0;

	    int value1 = arr[0];
	    if (n == 1) return value1;

	    int value2 = max(arr[0], arr[1]);
	    if (n == 2) return value2;

	    // contains maximum sum at the end
	    int max_sum = 0;

	    // Fill remaining positions
	    for (int i = 2; i < n; i++) {
	        max_sum = max(arr[i] + value1, value2);
	        value1 = value2;
	        value2 = max_sum;
	    }

	    return max_sum;




 int i=n-1;
          int j=0;
          while(i>=0 && j <m){
              if(arr1[i]>arr2[j]){
                  swap(arr1[i], arr2[j]);
              }
              i--;
              j++;
          }
          sort(arr1, arr1+n);
          sort(arr2, arr2+m);




 sort(arr,arr+n);
        int i=0;
        vector<int> ans;
        for(i =0;i<n;i++){
            if(arr[i] == arr[i+1]){
                ans.push_back(arr[i]);
            }
        }
        
        auto final = unique(ans.begin(), ans.end());
        ans.erase(final, ans.end());
        
        if(ans.empty())
        {
            return {-1};
        }
        else
        return ans;
    
