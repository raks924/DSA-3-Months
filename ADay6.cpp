vector<int>v1;
   vector<int>v2;
   for(int i = 0;i<n;i++){
       if(arr[i]>=0){
           v1.push_back(arr[i]);
       }
       else{
           v2.push_back(arr[i]);
       }
   }
   if(v1.empty()){
       for(int i = 0;i<n;i++){
           arr[i]=v2[i];
       }
   }
   else if(v2.empty()){
       for(int i = 0;i<n;i++){
           arr[i]=v1[i];
       }
   }
   else{
   int i = 0;
   int k = 0;
   int j = 0;
   while(i<n){
       
       if(k<v1.size()){
       arr[i]=v1[k];
       k++;
       i++;
       }
       if(j<v2.size()){
           
           arr[i]=v2[j];
           j++;
           i++;
           
       }
       }
   }




int remove_duplicate(int a[],int n){
        // code here
        int start = 0;
        for(int i = 1;i<n;i++)
        {
            if(a[start]!=a[i])
            {
                start++;
                a[start]=a[i];
            }
        }
        return start+1;
    }


int nonZero = 0;
        for(int j=0;j<n;j++){
            if(arr[j] != 0){
                swap(arr[j], arr[nonZero]);
                nonZero++;
            }
        }
