13. Median of Two sorted arrays 
Hard Accuracy: 46.21% Submissions: 11817 Points: 8
Given two sorted arrays of sizes N and M respectively. The task is to find the median of the two arrays when they get merged.

 

Example 1:

Input:
N = 5, M = 6 
arr[] = {1,2,3,4,5}
brr[] = {3,4,5,6,7,8}
Output: 4
Explanation: After merging two arrays, 
elements will be as 1 2 3 3 4 4 5 5 6 7 8
So, median is 4.
 

Example 2:

Input:
N = 2, M = 3 
arr[] = {1,2}
brr[] = {2,3,4}
Output: 2
Explanation: After merging two arrays, 
elements will be as 1 2 2 3 4. So, 
median is 2.
 

Your Task:
You do not need to read input or print anything. Complete findMedian() function which takes the two arrays and n and m as input parameters and returns their median. If there are total even elements, return floor of average of middle two elements.

 

Expected Time Complexity : O(log(max(m,n)))
Expected Auxilliary Space : O(1)

 

Constraints:


// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        int begin1=0,end1=n;
        while(begin1<=end1){
            int i1=(begin1+end1)/2;
            int i2=(n+m+1)/2-i1;
            int min1=(i1==n)?INT_MAX:arr[i1];
            int max1=(i1==0)?INT_MIN:arr[i1-1];
            int min2=(i2==m)?INT_MAX:brr[i2];
            int max2=(i2==0)?INT_MIN:brr[i2-1];
            if(max1<=min2&&max2<=min1){
                if((m+n)%2==0)
                   return (max(max1,max2)+min(min1,min2))/2;
                else
                   return max(max1,max2);
            }
            else if(max1>min2) end1=i1-1;
            else begin1=i1+1;
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends