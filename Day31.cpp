int n = str1.size();
        string ans = "";
        string ans1 = "";
        ans = str1.substr(2,n-2)+str1.substr(0,2);
        ans1 = str1.substr(n-2,2)+str1.substr(0,n-2);
        
        if(str2 == ans || str2 == ans1)
            return true;
        else
            return false;
    }


 n=s.length();

       stack<int>st;
       st.push(-1);
       int result=0;
       
       for(int i=0;i<n;i++)
       {
       
       if(s[i]=='(')
       {
           st.push(i);
       }
       else //(st[s]==')')
       {
           st.pop();
       
       if(!st.empty())
       {
           result=max(result,i-st.top());
       }
       
       else
       {
       st.push(i);    
       }
           
       }
       
   }
     return result;  
   }



  string ans="";
       int n=s.length();
       for(int i=0;i<n;i++){
           char ch=s[i];
           if(i==0 and (ch>='A' and ch<='Z')){
               ans+=tolower(ch);
           }
           else if(ch>='a' and ch<='z'){
               ans+=ch;
           }
           else if(ch>='A' and ch<='Z'){
               ans+=' ';
               ans+=tolower(ch);
           }
           
       }
       return ans;


int s=oldW.size();
        int t= str.size();
        int g;
        string str2;
        for(int i=0;i<str.size();i++)
        {
            if(str.substr(i,s)==oldW)
            {
              i+=oldW.size()-1;
              str2+=newW;
                
            }
            else
            {
                str2.push_back(str[i]);
            }
        }
      return str2;
     
    }
