#LEADERS IN AN ARRAY
vector<int> Solution::solve(vector<int> &A) {
    vector<int> vec;
    int el = A[A.size()-1];
    vec.push_back(el);
    for(int i = A.size()-1;i >= 0 ; i--){
        if(A[i] > el)
        {
            el = max(el,A[i]);
            vec.push_back(el);
        }        
    }
    
    reverse(vec.begin(),vec.end());
    
    return vec;
}

#PASCALS TRIANGLE
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans(A);
    for(int i = 0; i < A; i++){
        ans[i].resize(i+1);
        ans[i][0] = ans[i][i] = 1;
        for(int j = 1; j < i; j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}



#BALANCE ARRAY
int Solution::solve(vector<int> &A) {
    int e=0,o=0;

    int n=A.size();

    for(int i=0;i<n;i++)

    {

        if(i%2==0)

        e+=A[i];

        else

        o+=A[i];

    }

    int sum=o+e;

    int ans=0;

   for(int i=0;i<n;i++)

   {
      int x=A[i];

       sum-=x;

       o=sum-o;

       e=sum-o;

       if(e==o)

       ans++;

       sum+=x;

   }

    return ans;


}
