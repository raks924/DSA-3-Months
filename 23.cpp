private:
    bool checkEq(int a[26],int b[26])
    {
        for(int i = 0 ; i < 26; i++)
        {
            if(a[i] != b[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int count2[26] = {0};
        int i =0;
        
        
        while(i< s1.length()) {
            int idx = s1[i] - 'a';
            count1[idx]++;
            i++;
        }
        
        i = 0;
        int k  = s1.length();
        while(i< k && i < s2.length()){
            int idx = s2[i]-'a';
            count2[idx]++;
            i++;
        }
        
        if(checkEq(count1,count2)){
            return 1;
        }
        
        while(i< s2.length()){
            char newChar = s2[i];
            int idx = newChar - 'a';
            count2[idx]++;
            
            char oldChar = s2[i-k];
            idx = oldChar - 'a';
            count2[idx]--;
            
            i++;
            
            if(checkEq(count1,count2)){
                return 1;
            }
            
            
        }
        return 0;
    }



string removeDuplicates(string s) {
        stack<char> st;
        
        for(int i = 0 ; i < s.length();i++){
            if(!st.empty() && st.top()==s[i])
            {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        
        string ans = "";
        while(st.size()){
            char ch = st.top();
            ans += ch;
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
