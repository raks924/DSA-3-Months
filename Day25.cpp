bool anagramStrings(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    int count[256] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        count[s2[i]]--;
    }
    
    for (int i = 0; i < 256; i++)
    {
        if (count[i]!=0)
        {
            return false;
        }
        
    }
    return true;   
}    

int firstRepeatingChar(string s1)
{
    int res = INT_MAX;
    int fi[256] = {-1};
    for (int i = s1.length()-1; i >= 0; i--)
    {
        if(fi[s1[i]] == -1){
            fi[s1[i]] == i;
        }else{
            res =fi[s1[i]];
        }    
    }
    return (res = INT_MAX) ? -1 : res;
    
}

int firstNonRepeatingChar(string s1)
{
    int res = INT_MAX;
    int fi[256] = {-1};
    for (int i = 0;i<s1.length();i++)
    {
        if(fi[s1[i]] == -1){
            fi[s1[i]] = i;
            
        }else{
            fi[s1[i]] = -2;
        }    
    }

    for (int i = 0; i < 256; i++)
    {
        if(fi[i]>=0){
            res=min(res,fi[i]);
        }
    }

    return (res == INT_MAX)?-1:res;   
   
string toLower(string S) {
        
        for(int i =0;i<S.length();i++){
            if(S[i]<97){
            S[i] = S[i] + 32;
            }
        }
        
        return S;
  
    }
  
string chartostr(char arr[] , int n)
    {
        string S= "";
        for(int i = 0;i<n;i++){
            S= S + arr[i];
        }
        
        return S;
    }
  
vector <int> count (string s)
        {
            
            vector<int> v;
            //code here.
            int l=0,u=0,n=0,sp=0;
            
            for(int i = 0; i<s.length(); i++){
                int c = s[i];
                
                if(c>=97 && c<=122)
                    l++;
                
                else if(c>=65 && c<=90)
                    u++;
                
                else if(c>=48 && c<=57)
                    n++;
                else
                    sp++;
            }
            
            v.push_back(u);
            v.push_back(l);
            v.push_back(n);
            v.push_back(sp);
            return v;
            
        }
  
 char getMaxOccuringChar(string str)
    {
        int res = INT_MIN;
        int count[256] = {0};
        for(int i =0;i<str.length();i++){
            count[str[i]]++;
            res= max(res,count[str[i]]);
            
        }
        
        for(int i = 0;i<256;i++){
            if(count[i] == res )
             return i;
        }
    }
  
  bool areRotations(string s1,string s2)
    {
        if(s1.length() != s2.length())
        {
            return false;
        }
        
        for(int i = 0 ; i< s1.length();i++){
            string temp = "";
            temp = temp + s1[s1.length() - 1];
            s1.pop_back();
            temp = temp + s1;
            s1 = temp;
            if(s1 == s2){
                return true;
            }
            
        }
        return false;
        
    }
  
  
  long binarySubstring(int n, string a){
        long ans = 0,i=0;
        for(int j = 0;j<n;j++){
            if(a[j] == '1'){
                ans =ans + i;
                i++;
            }
            
        }
        return ans;
    }
