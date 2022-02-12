//Multiply left and right array sum. 
int multiply(int arr[], int n)
{
    // Complete the function
    int mid = n/2;
    
    int sum1 = 0;
    for(int i=0; i<mid;i++){
        sum1 += arr[i];
    }
    
    int sum2=0;
    for(int j=mid;j<n;j++){
        sum2 += arr[j];
    }
    
    int ans = sum1 * sum2;
    return ans;
  
  
  
