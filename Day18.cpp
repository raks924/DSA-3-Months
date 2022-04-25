     
         // Base Case
      if(n<=2)
         return -1;
         
        int big1 = max(a[0],a[1]);
      int big2 = min(a[0],a[1]);
      int big3=INT_MIN;
      
     
    
      // Traverse Array     
      for(int i=2;i<n;i++)
      {
        /* three way filtering */
         if(a[i]>big3)
         {
                big3 = a[i];
         }
         if(a[i]>big2)
         {
             big3 = big2;
             big2 = a[i];
         }
         if(a[i]>big1)
         {
             big2 = big1;
             big1 = a[i];
         }
      }
      
      return big3;
