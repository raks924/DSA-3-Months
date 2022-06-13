int CircularMaxSubSum (int arr[],int n) {
    int res = 0;
    int curr_sum = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            int index = (i+j) % n;
            curr_sum = curr_sum + arr[index];    
        }
    res = max(res,curr_sum);    
        
    }
    return res;
    
    
}
