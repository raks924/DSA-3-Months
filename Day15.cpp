//LARGEST ELE IN ARRAY
int largest(vector<int> &arr, int n)
    {
        int mini = INT_MIN;
        
        for(int i = 0 ; i < arr.size();i++)
        {
            if(arr[i] > mini)
            {
                mini = arr[i];
            }
        }
        return mini;
    }

//REVERSE ARRAY IN GPS
void reverseInGroups(vector<long long>& arr, int n, int k){
        int l=0,  r=k;
        while(r <= n)
        {
            reverse(arr.begin() + l,arr.begin()+ r);
            l=r;
            r+=k;
        }
        reverse(arr.begin()+l,arr.end());
    }
