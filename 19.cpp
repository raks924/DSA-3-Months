int finalValueAfterOperations(vector<string>& operations) {
        int X = 0 ;
        for(int i = 0 ; i < operations.size();i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                X = X-1;
            }else{
                X = X + 1;
            }
        }
        return X;
    }
    
int numJewelsInStones(string jewels, string stones) {
        int ct = 0  ; 
        for(int i = 0 ; i  < jewels.length();i++){
            for(int j = 0 ; j < stones.length();j++){
                if(stones[j] == jewels[i]){
                    ct++;
                }
            }
        }
        return ct;
    }
    
int balancedStringSplit(string s) {
//         if(sort(s.begin(),s.end()))
//             return 1;
        
        int ans = 0,bal = 0;;
        for(int i = 0 ; i < s.length();i++){
            if(s[i] == 'L')
                bal++;
            else{
                bal--;
            }
            
            if(bal == 0)
                ans++;
        }
        return ans;
    }
};





ic:
    string restoreString(string s, vector<int> indices) {
        string suff_str=s;
        for(int i=0;i<indices.size();i++){
        suff_str[indices[i]]=s[i];

    }
    return suff_str;
