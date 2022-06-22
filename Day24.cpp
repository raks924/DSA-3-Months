string firstAlphabet(string S){
	string result = "";
 
    // Traverse the string.
    bool v = true;
    for (int i=0; i<S.length(); i++)
    {
        // If it is space, set v as true.
        if (S[i] == ' ')
            v = true;
 
        // Else check if v is true or not.
        // If true, copy character in output
        // string and set v as false.
        else if (S[i] != ' ' && v == true)
        {
            result.push_back(S[i]);
            v = false;
        }
    }
 
    return result;
}
};


 string concatenatedString(string s1, string s2) 
    { 
        string ans = "";
        string no = "-1";
        for(int i = 0;i<s1.size();i++){
            if(s2.find(s1[i])!=string::npos)
            continue;
            else
            ans+=s1[i];
		
		
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;		
        }
        for(int i = 0;i<s2.size();i++){
            if(s1.find(s2[i])!=string::npos)
            continue;
            else
            ans+=s2[i];
        }
        if(ans=="")
        return no;
        else
        return ans;
    }

	 
string modify (string s)
        {
            string ans = "";
            for(int i = 0 ;i < s.length();i++){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    ans.push_back(s[i]);
                }}
                reverse(ans.begin(),ans.end());
                int j = 0;
                
                for(int i = 0 ; i < s.length();i++){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    s[i] = ans[j];
                    j++;
                }}
                return s;
            
