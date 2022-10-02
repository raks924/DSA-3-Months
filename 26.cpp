int longestSubstrDistinctChars (string S)
{
    unordered_map<char,int>a;

    

    int n=S.length();

    int j=0,i=0,m=0;

    

   for(int i=0;i<n;i++)

    {

        a[S[i]]++;

        

        while(a[S[i]]>1)

        {

            a[S[j]]--;

            j++;

        }

         m=max(m,i-j+1);

        

    }

    

   return m;

}
