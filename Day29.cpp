// Your code here
        stack<char> s;
        for(int i=0;i<x.size();i++){
            if(x[i]=='(' || x[i]=='[' || x[i]=='{') s.push(x[i]);
            else{
                if(s.empty()) return false;
                else if(x[i]==')'){
                    if(s.top()=='(') s.pop();
                    else return false;
                }
                else if(x[i]==']'){
                    if(s.top()=='[') s.pop();
                    else return false;
                }
                else if(x[i]=='}'){
                    if(s.top()=='{') s.pop();
                    else return false;
                }
                
            }
        }
        if(s.empty())return true;
        else return false;
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
