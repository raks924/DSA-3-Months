#include<iostream>
using namespace std;

int main(){
    int n,s;
    cout<<"ente rthe size";
    cin>>n;

    int arr[n];
    cout<<"enter the array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    //Xor Of CONSECUTIVE elements
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = arr[i] ^ arr[i+1];
    }

    cout<<array[n];

    return 0;    
}