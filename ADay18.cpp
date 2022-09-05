vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;    
    for(int j = 0;j < mCols ; j++){
        for(int i = 0 ; i < nRows; i++){
        if(j % 2 == 0){            
                ans.push_back(arr[i][j]);            
        }else{            
                ans.push_back(arr[nRows-i-1][j]);            
        }
        }
    }
    return ans;
}
