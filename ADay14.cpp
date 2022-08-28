 void reverseString(vector<char>& s) {
        int n = s.size();
        int j = n-1,i=0;
        int mid = n/2;
        while(i != mid){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
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
            bool checkPalindrome(string a) {
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
        public:
            bool isPalindrome(string s) {

                //faltu character hatado
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
                return checkPalindrome(temp);

            }



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







string removeOccurrences(string s, string part) {
         while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }


int count;
    string str="",s_curr="";
   int  i=0;
       count =1;
       while(i<src.size()){
           if(src[i+1]==src[i])
           count++;
           else{
               str+=src[i];
               str+=to_string(count);
               count=1;
           }
           i++;
       }
       
    return str;
