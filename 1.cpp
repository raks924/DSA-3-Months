
int sumElement(int arr[],int n)
{
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}


	void immediateSmaller(vector<int>&arr, int n) {
	    for(int i = 0 ; i< n ; i++)
	    {
	        if(i==n-1)
	            arr[i] = -1;
	            
	        if(arr[i+1] < arr[i])
	            arr[i] = arr[i+1];
	        else
	            arr[i] = -1;
	    }
	    
	}
