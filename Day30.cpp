int res;
        for(int i =0;i<str.size();i++){
                if(patt.find(str[i])!= string::npos){
                    return i;
                }
        }
        return -1;


nt countWords(string list[], int n)
        {
           unordered_map<string,int> m;
           int count=0;
          unordered_map<string,int> mp;
          for(int i=0;i<n;i++)
          mp[list[i]]++;
          for(int i=0;i<n;i++)
          {
              if(mp[list[i]]==2)
              {
                  mp[list[i]]--;
                  count++;
              }
          }
          return count;
