*void zeroArrange(int arr[],int n){
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == 0)
        {
            int j;
            for ( j = i+1; j < n; j++)
            {
                if (arr[j]!=0)
                {
                    swap(arr[i],arr[j]);    
                }                
            }          
        }
    }
}*/


void zeroArrange2(int arr[],int n){
    int count = 0;
    for (int  i = 0; i < n; i++)
    {       
        if (arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;            
        }
    }
  
  void arrayReversal(int arr[],int n ){
    int i=0,j=n-1;
    while (i < j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }    
}

void LeftRotation(int arr[],int n){
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;

    
}
    
