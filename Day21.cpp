int ChocDistrProb(int arr[],int m, int n) {
     sort(arr,arr+n);
     int mini = 0;
     int res = INT_MAX;

     if (m>n)
     {
        return -1;
     }
     
     for (int i = 0; i+m-1 < n; i++)
     {
            mini = arr[i +m-1] - arr[i];
            res = min(res,mini);
        
        
     }
     return res;
}
