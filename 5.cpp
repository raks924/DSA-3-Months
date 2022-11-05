bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    int sum  = 0;
    
    for(int i = 0 ; i < n-2;i++){
        for(int j = i+1 ; j < n-1 ; j++){
            int el = A[i]+A[j];
            int s = j +1,e=n-1;
            
            while(s<e){
                if(A[s]+A[e] < (X-el)){
                    s++;
                }else if(A[s]+A[e] > (X-el))
                    e--;
                else{
                    return true;
                }
            }
        }
    }
    return false;;
}



void threeWayPartition(vector<int>& array,int a, int b)
    {
        int i = 0 , j = 0 , k = array.size()-1;
        
        while(j<=k){
            if(array[j] >  b){
                swap(array[j],array[k]);
                k--;
                
            }else if(a <= array[j] && array[j] <= b){
                j++;
            }else if(array[j] < a){
                swap(array[i++],array[j++]);
            }
        }
        
    }
