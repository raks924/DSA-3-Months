    bool isPalindrome(string s) 
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(isupper(s[i]))
                    s[i] = tolower(s[i]);
            }
            else
            {
                s.erase(s.begin() + i);
                i--;
            }
        }

        cout << s << endl;
        
        string rev = s;   
        reverse(rev.begin(), rev.end());
        
        return s == rev;
    }
};

bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }    
        
        int count[256] = {0};
        
        for(int i = 0 ; i< s.length();i++){
            count[s[i]]++;
        }
        
        for(int i = 0 ; i< t.length();i++){
            count[t[i]]--;
        }
        
        for(int i =0;i<256;i++){
            if(count[i] != 0){
                return false;
            }
            
        }
        return true;
    }



   bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for(int i=0;i<n;i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
                st.push(s[i]);
            } else if(s[i]==')' || s[i]=='}' || s[i]==']') {
                if(st.empty()) return false;
                if((s[i] == ')' && st.top()!='(') || 
                   (s[i] == '}' && st.top()!='{') || 
                   (s[i] == ']' && st.top()!='[')) 
                    return false;
                st.pop();
            }
        }
        if(st.empty())
            return true;
        else
            return false;
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
   }
