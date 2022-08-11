sort(nums.begin(),nums.end());
    int size = nums.size();
    vector<int> ans;
    int i=0;
    while(i < size-1){
    if(nums[i]==nums[i+1]){
    ans.push_back(nums[i]);
    i+=2;

          }
    else{
        i++;
    }
    }
    return ans;

    }






  //sorting the array
        sort(arr.begin(),arr.end());
        
        vector<int> ans;
        int count=1;
        
        int i=0;
        //iterating till less than arr.size()-1
        while(i <arr.size()-1){
            if(arr[i] == arr[i+1]){
                count++;
                i++;
            }
            else {
                ans.push_back(count);
                count = 1;
                i++;
            }
        }
        
        
        //pushing the last element of the array
        ans.push_back(count);
        
        //sorting the vector which stores our number count
        sort(ans.begin(),ans.end());
        
        //iterating through the Resultant vector to see if we have any duplicate count
        i=0;
        while(i<ans.size()-1){
            if(ans[i] == ans[i+1]){
                return false;
            }
            i++;
        }
        return true;
