// 13. Subarray range with given sum 
// Easy Accuracy: 41.43% Submissions: 8814 Points: 2
// Given an unsorted array of integers and a sum. The task is to count the number of subarray which adds to the given sum.

// Example 1:

// Input:
// n = 5
// arr[] = {10,2,-2,-20,10}
// sum = -10
// Output: 3
// Explanation: Subarrays with sum -10 are: 
// [10, 2, -2, -20], [2, -2, -20, 10] and 
// [-20, 10].
// Example 2:

// Input:
// n = 6
// arr[] = {1,4,20,3,10,5}
// sum = 33
// Output: 1
// Explanation: Subarray with sum 33 is: 
// [20,3,10].
// Your Task:
// This is a function problem. You only need to complete the function subArraySum() that takes arr, n, sum as parameters and returns the count of subarrays which adds up to the given sum. 

// Expected Time Comlexity: O(n)
// Expected Auxilary Space: O(n)

// Constraints:
// 1 <= n <= 105
// -105 <= arr[i] <= 105
// -105 <= sum <= 105


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
       unordered_map<int,int> m;
    int res=0;
    int presum=0;
    for(int i=0;i<n;i++)
    {
        presum+=a[i];
        if(presum==sum)
          res++;
        if(m.find(presum-sum)!=m.end())
         res+=m[presum-sum];
         m[presum]++;
        
    }
    return res;
    }
};


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends