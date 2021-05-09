// 12. Subarray with given sum 
// Easy Accuracy: 39.71% Submissions: 88713 Points: 2
// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

 

// Example 1:

// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.
 

// Example 2:

// Input:
// N = 10, S = 15
// A[] = {1,2,3,4,5,6,7,8,9,10}
// Output: 1 5
// Explanation: The sum of elements 
// from 1st position to 5th position
// is 15.
 

// Your Task:
// You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N and S as input parameters and returns a list containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the list should be according to 1-based indexing. If no such subarray is found, return -1. 

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        // Your code here
        vector<int>v;
        int curr_sum=arr[0],start=0,i;
        for(i=1;i<=n;i++){
            while(curr_sum>sum&&start<i-1){
                curr_sum=curr_sum-arr[start];
                start++;
            }
            if(curr_sum==sum){
                v.push_back(start+1);
                v.push_back(i);
                break;
            }
            if(i<n){
                curr_sum+=arr[i];
            }
        }
        if(v.empty()){
            v.push_back(-1);
        }
        return v;
        
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends