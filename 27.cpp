int romanToDecimal(string &str) {
        unordered_map<char,int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int temp = 0; 
        
        for(int i = 0 ; i< str.length();i++)
        {
            if(m[str[i]] < m[str[i+1]])
                temp += - m[str[i]];
            
            else
                temp += m[str[i]];
        }
        
        
        return temp;
        
    }


	string printString(string &S, char ch, int count)
    {
        if(!count) return S;
        for(int i=0; i<S.length() ; i++)
         {
             if(S[i]==ch) count--;
             if(!count && i==S.length()-1) return "Empty string";
             else if(!count)
              return S.substr(i+1, S.length());
         }
         return "Empty string";
    }




bool areKAnagrams(string str1, string str2, int k) {
       if(str1.length()!=str2.length())return false;
       sort(str1.begin(),str1.end());
       sort(str2.begin(),str2.end());
       // for(int i = 0;i<str1.length();i++){
       //     cout<<str1[i];
       // }
       // cout<<endl;
       // for(int i = 0;i<str2.length();i++){
       //     cout<<str2[i];
       // }
       unordered_map<char,int>m1;
       for(int i =0 ;i<str1.length();i++){
           m1[str1[i]]++;
       }
       unordered_map<char,int>m2;
       for(int i =0 ;i<str2.length();i++){
           m2[str2[i]]++;
       }
       int i = 0;
       int count = 0;
       while(i<str1.length()){
           if(m1.find(str2[i])==m1.end()){
               count++;
           }else{
           m1[str2[i]]--;
           if(m1[str2[i]]==0){
               m1.erase(str2[i]);
           }}
           i++;
       }
       if(count>k)return false;
       return true;
       
    }


string printMinIndexChar(string S, string patt)
	{
	     int n=S.size();

         int m=patt.size();
    
         string str="$";
    
         for(int i=0; i<n; i++)
    
         {
    
             for(int j=0; j<m; j++)
    
             {
    
                 if(S[i]==patt[j])
    
                 {
    
                     str=patt[j];
    
                     return str;
    
                 }
    
             }
    
         }
	}
