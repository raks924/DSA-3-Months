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
