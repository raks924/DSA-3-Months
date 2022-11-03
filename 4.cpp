 public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort( b, b + n , greater<int>());
        
        long long int sum = 0;
        
        for(int i = 0 ; i < n;i++){
            sum = a[i]*b[i] + sum;
        }
        
        return sum;
    }

vector<int> increment(vector<int> arr ,int N) {
        for(int i=N-1;i>=0;i--){

        if(arr[i]!=9){

                arr[i]++;

                break;

            }else{

            arr[i]=0;

            }

        }
    
        if(arr[0]==0){
    
            arr.push_back(1);
    
     

        reverse(arr.begin(),arr.end());

       return arr;
    
        }
    
        return arr;

 
 
 
 vector<int> leaders(int a[], int n){
        int cnt = 1, max = a[n-1];

        vector<int> v;

        v.push_back(max);

        for(int i = n-2; i >= 0; --i){

            if(a[i] >= max){

                v.push_back(a[i]);

                max = a[i];

            }

        }

        reverse(v.begin(), v.end());

        return v;
