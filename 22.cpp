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


bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool isPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
bool checkPalindrome(string s)
{
     string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return isPalindrome(temp);
        

    string replaceSpaces(string &str){
	string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
    
    
    
 while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
