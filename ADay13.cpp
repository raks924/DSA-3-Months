int trap(vector<int>& height) {
        int n = height.size();
        if(n<=2){
        return 0;
        }
        //left max and right max
        vector left(n,0), right(n,0);
        left[0] = height[0];
        right[n-1] = height[n-1];

        for(int i = 1; i<n; i++){
            left[i] = max(left[i-1],height[i]);
            right[n-i-1] = max(right[n-i],height[n-i-1]);
        }
        //water
        int water = 0;
        for(int i = 0; i<n; i++){
            water += min(left[i],right[i]) - height[i];
        }
        return water;

    }

 int maxArea(vector<int>& height) {
        
        int start = 0;
        int len = height.size();
        int end = len-1;
        int maximumArea = LONG_MIN;
        while(start<end)
        {

            maximumArea = max(maximumArea,min(height[start],height[end]) * (end-start));

            if(height[start]>height[end])
            {
                end--;
            }
            else{
                start++;

            }



        }        

        return maximumArea;  
        }







// required to make arr[] palindrome
int findMinOps(int arr[], int n)
{
    int ans = 0; // Initialize result
 
    // Start from two corners
    for (int i=0,j=n-1; i<=j;)
    {
        // If corner elements are same,
        // problem reduces arr[i+1..j-1]
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
 
        // If left element is greater, then
        // we merge right two elements
        else if (arr[i] > arr[j])
        {
            // need to merge from tail.
            j--;
            arr[j] += arr[j+1] ;
            ans++;
        }
 
        // Else we merge left two elements
        else
        {
            i++;
            arr[i] += arr[i-1];
            ans++;
        }
    }
 
    return ans;
}





static int myCompare(string X, string Y) {
	    // first append Y at the end of X
	    string XY = X.append(Y);

	    // then append X at the end of Y
	    string YX = Y.append(X);

	    // Now see which of the two formed numbers is greater
	    return XY.compare(YX) > 0 ? 1 : 0;
	}
public:
	// The main function that prints the arrangement with the largest value.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	    // Sort the numbers using library sort function. The function uses
	    // our comparison function myCompare() to compare two strings.
	    // See http://www.cplusplus.com/reference/algorithm/sort/ for details
	    sort(arr.begin(), arr.end(), myCompare);

	    string ans;
	    for (int i = 0; i < arr.size(); i++) ans += arr[i];
	    return ans;
	}
};
