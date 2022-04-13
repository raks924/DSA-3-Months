//PYTHAGOREAN TRIPLET EXIST OR NOT
bool checkTriplet(int arr[], int n) {
	    sort(arr, arr+n);	    
	    if(n < 3){
	        return false;
	    }    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            for(int k = j+1;k<n;k++)
	            {
	                int a = arr[i],b=arr[j],c=arr[k];
	                if((a*a) + (b*b) == (c*c)){
	                    return true;
	                }
	            }
	        }     
	    }
	    return false;
	}
};

//OPERATING AN ARRRAY
bool searchEle(int a[],int x)
{
   // add code here.
   int i,n=100;
   
   for(i=0;i<n;i++)
   {
   if(a[i]==x)
     return 1;
   }
   return 0;
}

bool insertEle(int a[],int y,int yi)
{
for (int i=0;i<100;i++){
              if (i ==yi) {
                          a[i] =y;
                          return true;
              }
          }
      return false;
}

bool deleteEle(int a[],int z)
{
   int i,n;
   for(i= 0;i<n;i++)
   {
       if(a[i]== z)
       a[i]= -1;
   }
   return true ;
}

//REVERSE VECTOR


