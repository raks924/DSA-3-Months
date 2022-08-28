string removeDups(string S) 
	{
	    string temp = "";
	    
	    for(int i = 0 ; i< S.size() ; i++){
	        if(temp.find(S[i]) == string::npos){
	            temp += S[i];
	        }
	    }
	    return temp;
	}


vector<string> winner(string arr[],int n)
    {
       unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int occur = INT_MIN;
        string ans;
        for(auto it:mp){
            if(occur < it.second){
                occur = it.second;
                ans = it.first;
            }
            else if(occur == it.second){
                ans = min(ans,it.first);
            }
        }
        vector<string> final;
        final.push_back(ans);
        final.push_back(to_string(occur));
        return final;
    }





char getMaxOccuringChar(string str)
    {
        int fre[26] = {0};
        int maxi = -1,ans = -2;
        
        for(int i = 0 ; i < str.length();i++){
            char ch = str[i];
            int num = ch - 'a';
            fre[num]++;
        }
        
        for(int j = 0 ; j < 26 ; j++){
            if(maxi < fre[j]){
                maxi = fre[j];
                ans = j;
            }
        }
        
        char final = ans +'a';
        
        return final;
        
        if(str.length() == 1)
            return str[0];
    }


 string removeDuplicates(string s) {
       for(int i=0;i<s.size();i++)
        {
        // if adjacent elements are same erase them
        if(s[i]==s[i+1])
        {

        s.erase(s.begin()+i+1);
        s.erase(s.begin()+i);

        // bring the iterator back to check for duplicate elements again
        if(i>=1)
            i-=2;
       // if duplicate element is from the first element(corner case) ex-"aaaa"
        else
            i--;
        }
    }
    return s;
    }
