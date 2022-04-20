int* insertElement(int arr[],int n,int x, int pos)
{
    n++;

    for(int i=n;i>=pos;i--){
        arr[i] = arr[i-1];
        
    }
    arr[pos -1] = x;
    
    
    return arr ;
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
