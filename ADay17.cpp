int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int len = 0;
        int l = 0, r = 0;
        unordered_set <char> st;
        while (r < n)
        {
            if (st.find(s[r])== st.end()) 
            st.insert(s[r]);
            else {
                 while (st.find(s[r]) != st.end()) {
                 st.erase(s[l]);
                 l++;
                 }
            st.insert(s[r]);
                 } 
            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }




int characterReplacement(string s, int k) {
        map<char,int>m;  // storing characters  and their count
        int l =0,max_Occurance=0,res=0;
        
        for(int i =0 ;i < s.size() ; i++){
            
            m[s[i]]++;  // adding value to map
            max_Occurance=max(max_Occurance,m[s[i]]);  // updating the maximum occuring element
            
            if(i-l+1-max_Occurance > k){  // if we get more operations in sliding window (invalid)
                m[s[l]]--; // decreasing count from map
                l++;  // increment  previous pointer
            }
            else res=max(res,i-l+1);    //update result
        }        
        return res;  
    }





vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Base case
		if(strs.size() == 1)
            return {{strs[0]}};
        
        vector<vector<string>> ans;
        map<string, vector<string>> M;
        for(int  i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); // Sorting the string
            M[strs[i]].push_back(str);  // Sorted string is the key and the value is the initial string
        }
        for(auto i = M.begin(); i != M.end(); i++)
            ans.push_back(i -> second);  // Traversing the map and adding the vectors of string to ans
        return ans;
    }


