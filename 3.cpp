vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i=0,j=0,sum = 0;
        if(s==0)
            return {-1};
        
        while(j < n)
        {
            sum+= arr[j];
            
            while(sum > s){
                sum -= arr[i];
                i++;
            }
            
            if(sum == s){
                return {i+1,j+1};
            }
            j++;
        }
        
        return {-1};
    }

void convertToWave(int n, vector<int>& arr){
        for(int i = 0 ; i < n ; i+=2)
        {
            if(arr[i+1] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(i<j)
	    {
	        if(arr[i]+arr[j]==x)
	        {
	            return true;
	        }
	        else if((arr[i]+arr[j])<x)
	        {
	            i++;
	        }
	        else
	        {
	            j--;
	        }
	    }
	    return false;
	}
};




int smallestSubWithSum(int arr[], int n, int x)
    {
        int i = 0 , j = 0 , sum = 0,len = 99999 ;
        
        while(j < n)
        {
            sum += arr[j];
            
            
            while(sum > x){
                len = min(len,j-i+1);
                sum -= arr[i]; 
                i++;
                
            }
            j++;
        }
        
        if (len == 99999)
            return 0;
     
  
  
  int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int,int> m;
        
        for(int i = 0 ; i < n ; i++)
        {
            m[arr[i]]++;
        }
        
        for(int i = 0 ; i < n;i++){
            if(m[arr[i]] == 1)
                return arr[i];
        }
        return 0;
    } 
  
