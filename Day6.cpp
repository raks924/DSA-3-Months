int* game_with_number(int arr[], int n)
{
    
    for(int i=0;i<n;i++){
        if(i!= n-1){
            arr[i] = arr[i] ^ arr[i+1];
        }else{
            break;
        }
    }
    return arr;
    
}

