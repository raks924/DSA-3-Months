#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter the size of array"<<"\n";
    cin>>n;

    int arr[n]; 

    cout<<"enter the array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int current;

    //INSERTION SORT
    for (int i = 1; i < n; i++)
    {
        arr[i] = current;
        int j = i-1;

        while (arr[j]>current)
        {
            arr[j] = arr[j+1];
            j--;
        }

        arr[j+1] = current;
        
    }

    cout<<"the sorted array is as follows: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

    
    
}