vector<int> leaders(int a[], int n){
       vector<int>ans;
       // ans.push_back(a[n-1]);
       int maxm = INT_MIN;
       for(int i=n-1;i>=0;i--){
           if(a[i]>=maxm){
               maxm = a[i];
               ans.push_back(a[i]);
           }
       }
       
       reverse(ans.begin(),ans.end()); //As we are traversing from end to start
       return ans;
       
       
 
