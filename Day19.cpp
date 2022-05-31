void MoveZeroesToEnd(int arr[]) {
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == 0)
        {
            int j = i+1;
            do
            {
                j++;
            } while (arr[j] != 0);
            swap(arr[i],arr[j]);
            
        }
        
    }
    
        
}

void Leader(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i+1; j < n; i++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
            if (flag == false)
            {
                cout<<arr[i];
            }
            
        }
      
    void ReverseAnArray(int arr[],int n){
    for (int i = 0; i < (n-1)/2; i++)
    {
        swap(arr[i],arr[n-i-1]);
        
    }
    }
