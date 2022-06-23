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
        for(int i = 0;i<s.length();i++){
            if(s[i] == '(' || '{' || '[')
                
        }    
    }
};
