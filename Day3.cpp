#include<iostream>
using namespace std;

//Largest element in Array
// int Largest(int arr[],int n){
//     int start = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]> start){
//             start = arr[i];
//         }
        
//     }

//     cout<<"the largest element"<<start;
    
// }


int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter your array"<<"\t";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //Multiple left and right array sum
    int start=0,end=0,mid;
    if (n%2 == 0)
    {
        mid = arr[(n/2)] + arr[(n/2)+1)];
    }else if (n%2 != 0)
    {
        mid = ar
    }

    
    
    

    //MAX,MIN
    // int min = 99999999;
    // int max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]<min)
    //     {
    //         min = arr[i];
    //     }else if (arr[i]>max)
    //     {
    //         max = arr[i];
    //     }
        
        
    // }

    // cout<<"MAX and MIN"<<max<<min;
    

    //Reverse array
    // cout<<"The reverse array is as follows:";
    // for (int i = n; i >= 0; i--)
    // {
    //     cout<<arr[i];
    // }

     return 0;
    
   
    
}


    