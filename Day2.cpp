#include<iostream>
#include<climits>
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

    //MAX TILL I,
    // int mx=INT_MIN;
    
    // for (int i = 0; i < n; i++)
    // {
    //     mx=max(arr[i],mx);
    //     cout<<mx;
    // }

    //SUM-OF-SUBARRAYS
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout<<curr;
        }
        
    }
    
    
    
    
    
    
}