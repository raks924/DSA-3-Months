//Seccond largest element
int fir=INT_MIN,sec = INT_MIN;
    	int flag = 0;
    	
    	for(int i=0;i<arr_size;i++)
    	{
    	    if(arr[i] > fir)
    	    {
    	        fir = arr[i];
    	        
    	    }
    	    
    	}
    	
    	for(int i=0;i<arr_size;i++)
    	{
    	    if(arr[i] > sec && arr[i]!= fir){
    	        sec = arr[i];
    	        flag++;
    	    }
    	}
    	
    	if(flag>0){
    	    return sec;
        }else{
            return -1;
        }

