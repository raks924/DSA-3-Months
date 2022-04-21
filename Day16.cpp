int* insertElement(int arr[],int n,int x, int pos)
{
    n++;

    for(int i=n;i>=pos;i--){
        arr[i] = arr[i-1];
        
    }
    arr[pos -1] = x;
    
    
    return arr ;
}

int deleteElement(int arr[],int n , int r){

    int i ;
    for ( i = 0; i < n; i++)
        if (arr[i] == r)
        {
            break;
        }
        

    if(i < n){
        
        for (int j = i; j < n; j++) 
        
            arr[j] = arr[j+1];
        
        n--;    
    }
    return n;   
    
    
}

int main(){
    int n=5;
    
    int x = 12;
    int pos = 3;
    
    int arr[100] = {5,1,7,2,4};

    insertElement(arr,n,x,pos);   

    for (int i = 0; i < n + 1; i++)
    {
        cout<<arr[i]<<endl;
    }    
    
    int r = 7;

    n =deleteElement(arr,n,r);    

    cout<<"Deleted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
