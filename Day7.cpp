//PLAY with OR

int* game_with_number(int arr[], int n)
{
    
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i]|arr[i+1];
    }
    
    return arr;
    
}

C++ Arrays (Sum of array) | Set 1
  class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
        int cub=0;
        for(int i=0;i<n;i++){
            cub = cub + a[i];
        }
        return cub;
    }   
};

//C++ Array (print an element) | Set 2
class Solution{
    public:
    int findElementAtIndex(int a[], int n, int key) 
    {
        // Your code goes here
        for(int i=0;i<n;i++){
            if(i == key){
                return a[i];
            }else{
                continue;
            }
             
        }
       
    }
};

//Cyclically rotate an array by one
void rotate(int arr[], int n)
{
    int temp= arr[n-1];
    for(int i = n-1 ; i >=0;i--){
                arr[i+1] = arr[i];
            }
    arr[0] = temp; 
}

