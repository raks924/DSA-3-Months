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

};


char firstRep (string s)
    {
           int m[26] = {0};
       for(int i=0; i<s.size(); i++) {
           m[s[i] - 'a']++;
       }
       for(int i=0; i<s.size(); i++) {
           if(m[s[i] - 'a'] > 1) {
               return s[i];
           }
       }
       return '#';
        
    }
};


string UncommonChars(string A, string B)
        {
            unordered_set<char>s1;

         unordered_set<char>s2;

         set<char>s3;

         

          string st;

          for(int i=0; i<A.size(); i++){

              s1.insert(A[i]);

          }

           for(int i=0; i<B.size(); i++){

              s2.insert(B[i]);

          }

          

             for(int i=0; i<A.size(); i++){

               if(s2.find(A[i])==s2.end()){

                   s3.insert(A[i]);

               }

           }

          

           for(int i=0; i<B.size(); i++){

               if(s1.find(B[i])==s1.end()){

                   s3.insert(B[i]);

               }

           }

         for(auto it : s3){

             st.push_back(it);

         }

         

         if(st.size()==0){

            return "-1"; 

         }

 

           return st;

           

        }


};


string removeChars(string string1, string string2) {
        int m = string1.size();
        
        int n = string2.size();
        string s="";
        
        for(int i = 0 ; i < m ; i++){
            if(string2.find(string1[i]) == string::npos){
                s.push_back(string1[i]);
            }
        }
        
        return s;
    }
