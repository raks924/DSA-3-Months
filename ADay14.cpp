 void reverseString(vector<char>& s) {
        int n = s.size();
        int j = n-1,i=0;
        int mid = n/2;
        while(i != mid){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
    }
