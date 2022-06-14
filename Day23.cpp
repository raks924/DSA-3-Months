int transitionPoint(int arr[], int n) {
    for(int i = 0 ;i< n ; i++){
        if(arr[i]== 1){
            return i;
        }
    }
    return {-1};
}


lass Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        sort(arr,arr+n); 
     long long int count=0;
     vector<int>v;
for(int i=0;i<n;i++){
   if(arr[i]==arr[i+1]){
       count++;
   }
   if(arr[i]!=arr[i+1] and count>0){
       v.push_back(arr[i]);
       count=0;
   }
}
  if(v.size()>0){
      sort(v.begin(),v.end());
      return v;
  }
  else {
      return{-1};
  }
       
       
   }
};

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       
      for(int i=0;i<n;i++)
      {
          if(i==0)
          {
              if(arr[i+1]<arr[i])
              return i;
           }
           else if(i==n-1)
           {
               if(arr[i]>arr[i-1])
              return i;
           }
           else
           {
             if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            return i;
           }
        }
        if(n==1)
            return 0;
    }
};
