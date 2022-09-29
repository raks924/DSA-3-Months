int lengthOfLongestSubstring(string s) {
         int n = s.size();
        map<char, int> m;
        int i=0, j=0, ans=0;
        
		while(j<n)
        {
            if(m[s[j]])                 
            {
                ans = max(ans, j-i);    
                
                while(s[i] != s[j])     
                {
                    m[s[i]]--;
                    i++;
                }
                m[s[i]]--;             
                i++;
            }
            
            m[s[j]]++;                  
            j++;
        }
        ans = max(ans, j-i);           
        return ans;    
    }
