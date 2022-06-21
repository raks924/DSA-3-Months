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
