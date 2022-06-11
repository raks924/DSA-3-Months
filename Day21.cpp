int ChocDistrProb(int arr[],int m, int n) {
     sort(arr,arr+n);
     int mini = 0;
     int res = INT_MAX;

     if (m>n)
     {
        return -1;
     }
     
     for (int i = 0; i+m-1 < n; i++)
     {
            mini = arr[i +m-1] - arr[i];
            res = min(res,mini);
        
        
     }
     return res;
}


//STOCK BUY AND SELL
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int begin = INT_MAX;
        int sell = 0;
        for(int i = 0 ;i< prices.size();i++) {
            begin = min(begin, prices[i]);            
            sell = max(sell, prices[i]-begin);
        }
        if(sell < 0)
            return -1;
        return sell;
    }
};
