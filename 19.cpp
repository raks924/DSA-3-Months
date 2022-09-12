int finalValueAfterOperations(vector<string>& operations) {
        int X = 0 ;
        for(int i = 0 ; i < operations.size();i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                X = X-1;
            }else{
                X = X + 1;
            }
        }
        return X;
    }
    
int numJewelsInStones(string jewels, string stones) {
        int ct = 0  ; 
        for(int i = 0 ; i  < jewels.length();i++){
            for(int j = 0 ; j < stones.length();j++){
                if(stones[j] == jewels[i]){
                    ct++;
                }
            }
        }
        return ct;
    }
    
int balancedStringSplit(string s) {
//         if(sort(s.begin(),s.end()))
//             return 1;
        
        int ans = 0,bal = 0;;
        for(int i = 0 ; i < s.length();i++){
            if(s[i] == 'L')
                bal++;
            else{
                bal--;
            }
            
            if(bal == 0)
                ans++;
        }
        return ans;
    }
};





ic:
    string restoreString(string s, vector<int> indices) {
        string suff_str=s;
        for(int i=0;i<indices.size();i++){
        suff_str[indices[i]]=s[i];

    }
    return suff_str;

            
            
bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for(int i = 0 ; i < sentence.length();i++){
            arr[sentence[i] - 'a']++;
        }
        
        bool flag = true;
        for(int j = 0 ; j < 26 ; j++){
            if(arr[j] == 0)
                flag = false;
        }
        return flag;
        
    }
     
            
 string firstPalindrome(vector<string>& words) {
        string ans= "";
        for(string str: words){
            for(int i=0;i<=str.length()/2;i++){
                if(str[i]!=str[str.length()-i-1])
                    break;
                if(i==str.length()/2){
                    ans = str;
                    return ans;
                }
            }
        }
        return ans;
    }
            
bool isPalindrome(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++){
         if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') 
             || (s[i] >= 'A' && s[i] <= 'Z'))
             
            {
             v.push_back(tolower(s[i]));
         }
            else{continue;}
        }
        
        int i=0,j=v.size()-1;
        while(i<j){
                if(v[i]!=v[j]){return false;}
                i++;j--;
        } 
        return true;
    }
            
bool isAnagram(string s, string t) {
        int ct1[26]={0};
        int  ct2[26] = {0};
        
        for(int i = 0 ; i < s.length();i++){
            ct1[s[i] - 'a']++;
        }
        
        for(int j = 0 ; j < t.length();j++){
            ct2[t[j]-'a']++;
        }
        
        for(int i = 0 ; i < 26;i++){
            if(ct1[i] != ct2[i])
                return false;
        }
        return true;
    }
            
            
  string removeConsecutiveCharacter(string S)
   {
       int n = S.length();
       string ans="";
       int i=0;
       while(i<n){
           if(i+1==n || S[i]!=S[i+1])
               ans+=S[i];
           i++;
       }
       return ans;
            
