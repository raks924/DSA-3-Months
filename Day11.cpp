//Max Till i 
int mx = -19999999;
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    mx = max(mx,arr[i]);
    cout<<mx<<endl;
}   

//Sum of subarray
for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            
            curr += arr[j];
            cout<<curr<<endl;
            
            
        }
        
    }


