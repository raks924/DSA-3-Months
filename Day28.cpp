int res = INT_MIN;
        unordered_map<string,int>ans;
        
        for(int i = 0;i<n;i++){
            ans[arr[i]]++;
            res = max(ans[arr[i]],res);
            
        }
        
        int sec =INT_MIN;
        for(auto x: ans){
            if(x.second != res){
            sec = max(x.second, sec);
        }}
        
        if(sec == INT_MIN ){
            return "";
        }
        
        for(auto x:ans){
            if(x.second == sec ){
                return x.first;
            }
        }
        
