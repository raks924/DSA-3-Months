int ind1=INT_MAX;
		int ind2=INT_MAX;
		int ans=INT_MAX;
		if(word1==word2) return 0;
		
		for(int i=0;i<s.size();i++){
		    if(s[i]==word1){
		       ind1=i;
		        ans=min(ans, abs(ind1-ind2));
		    }
		    else if(s[i]==word2){
		       ind2=i;
		       ans=min(ans, abs(ind1-ind2));
		    }
		   
		   
		    
		}
		return ans;

 string ans="";
       string res="";
       int i=S.size()-1;
       while(i>=0){
           while((S[i]!='.')&&(i>=0))
           {
             res.push_back(S[i]);
             i--;
           }
           reverse(res.begin(),res.end());
           for(int j=0;j<res.size();j++)
           {
               ans.push_back(res[j]);
           }
          // ans.push_back('.');
           res.clear();
           i--;
           ans.push_back('.');
       }
      ans.pop_back();
       return ans;
