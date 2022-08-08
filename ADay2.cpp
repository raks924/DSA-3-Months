int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        
        
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k++;
        }
        
        int m=1;
        while(m<=i-1){
            cout<<"*";
            m++;
        }
        
        int l =n-i+1;
        while(l>=1){
            cout<<l;
            l--;
        }
        
        
        
        cout<<endl;
        i++;
    }
