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


int front;
    for (front = 0; front < n; front++)
        if (temp[front] != arr[front])
            break;
 
    // Finding the last mismatch.
    int back;
    for (back = n - 1; back >= 0; back--)
        if (temp[back] != arr[back])
            break;
 
    // If whole array is sorted
    if (front >= back)
        return true;
 
    // Checking subarray is decreasing or not.
    do
    {
        front++;
        if (arr[front - 1] < arr[front])
            return false;
    } while (front != back);
 
    return true;
            
           
