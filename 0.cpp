3 questions 

vector<int> duplicates(int arr[], int n) {
        vector<int> ans;

       sort(arr,arr+n);

       int prev=-1;

       for(int i=0;i<n-1;i++){

          if(arr[i]==arr[i+1] && prev!=arr[i]){

              prev = arr[i];

              ans.push_back(arr[i]);

          }

      }

      if(ans.size()==0)

          ans.push_back(prev);

      return ans;
    }
};



int getPairsCount(int arr[], int n, int k) {
        int ct = 0;
        
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            if(mp.find(k-arr[i]) != mp.end()){
                ct += mp[k-arr[i]];
                if(k-arr[i] == arr[i]) ct--;
                mp[arr[i]]--;
            }
        }
        
        return ct;
    }



int transitionPoint(int arr[], int n) {
    int i= 0 ;
    while(i < n)
    {
        if(arr[i] == 1)
            return i;
        i++;
    }
    return -1;
}


int firstRepeated(int arr[], int n) {
        int freq[999999] = {0};

        for(int i = 0; i<n; i++){

            freq[arr[i]]++;

        }

        for(int i = 0; i<n; i++){

            if(freq[arr[i]]>1){

                return i+1;

            }

        }

        return -1;
