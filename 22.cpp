string reverseWords(string S) 
    { 
        string temp = "";
        string ans = "";
        int i = S.length()-1;
        
        while(i >=0){
            while((S[i] != '.')&&(i >=0)){
                temp = temp + S[i];
                i--;
            }
            reverse(temp.begin(),temp.end());
            ans = ans + temp + '.';
            temp.clear();
            i--;
            
        }
        ans.pop_back();
        
        
        return ans;
  
  
 //INPLACE SOLUTION
  reverse(S.begin(),S.end());
        int i = 0 , j = 0 ;
        
        while(i<S.length()){
            while(i < S.length() && S[i] != '.'){
                i++;
            }
            reverse(S.begin()+j,S.begin()+i);
            j= i+1;
            i++;
        }
        return S;
    } 

bool isAnagram(string a, string b){
        
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        
        int n = a.size();
        int m = b.size();
        
        for(int i = 0 ; i < n ; i++){
            m1[a[i]]++;
        }
        
        for(int i = 0 ; i < m ; i++){
            m2[b[i]]++;
        }
        
        for(int j = 0 ; j < m1.size();j++){
            if(m1[j] != m2[j] || m1.size()!=m2.size())
                return 0;
        }
        return 1;
        
    }
