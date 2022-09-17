int countSubstrings(string s) {
        int ans =0;
        for(int i=0; i<s.size(); i++){
            int left =i, right =i;
            while(left>=0 and right<s.size() and s[left]==s[right]){
                ans++;
                left--;
                right++;
            }
            left = i, right = i+1;
            while(left>=0 and right<s.size() and s[left]==s[right]){
                ans++;
                left--;
                right++;
            }
        }
        return ans;
    }



 string longestPalindrome(string s) {
        string res = "";
        int count = 0;
         
        
        for(int i = 0 ; i < s.length();i++){
            int l = i,r=i;
            
            while(l>=0 && r< s.length() && s[l] == s[r]){
                int len= r-l+1;
                if(len>count){
                    res = s.substr(l,len);
                    count = len;
                }
                l--;
                r++;
            }
            
            l = i,r=i+1;
            
            while(l>=0 && r< s.length() && s[l] == s[r])
            {
                int len = r-l+1;
                if(len>count){
                    res = s.substr(l,len);
                    count = len;
                }
                l--;
                r++;
            }
        }
        return res;
    }



ector<int> nextPermutation(int N, vector<int> arr){
        int index1,index2;
        for(int i=N-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                index1 = i;
                break;
            }
        }
        if(index1>=0)
        {
            for(int i=N-1;i>=index1;i--)
            {
                if(arr[i]>arr[index1])
                {
                    index2 = i;
                    break;
                }
            }
            swap(arr[index1],arr[index2]);
            reverse(arr.begin()+index1+1,arr.end());
        }
        else
        {
            reverse(arr.begin(),arr.end());
        }
        return arr;
    }
};
