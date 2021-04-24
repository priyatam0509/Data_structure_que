
// 15. Positive Negative Pair 
// Easy Accuracy: 35.19% Submissions: 4570 Points: 2
// Given an array of distinct integers, find all the pairs having both negative and positive values of a number in the array.


// Example 1:

// Input:
// n = 8
// arr[] = {1,3,6,-2,-1,-3,2,7}
// Output: -1 1 -3 3 -2 2
// Explanation: 1, 3 and 2 are present 
// pairwirse postive and negative. 6 and 
// 7 have no pair.
 

// Example 2:

// Input:
// n = 3
// arr[] = {3,2,1}
// Output: 0
// Explanation: No such pair exists so the 
// output is 0.
 

// Your Task:
// You do not need to read input or print anything. Complete the function findPairs() which takes the array A[] and the size of the array, n, as input parameters and returns a list of integers denoting the pairs. The pair that appears first in A[] should appear first in the returning list and within the pair the negative integer should appear before positive integer. Return an empty integer list if no such pair exists. 

 

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

 

// Constraints:
// 1 <= n <= 106
// -106 <= arr[i] <= 106
// { Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
#include <unordered_map>
#include <math.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
      vector<int>v;
      set<int>s;
      for(int i=0;i<n;i++){
          if(s.find(-arr[i])!=s.end()){
              v.push_back(arr[i]);
              v.push_back(-arr[i]);
              s.erase(arr[i]);
          }
          else{
              s.insert(arr[i]);
          }
      }
      
      return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        vector <int> res = obj.findPairs(arr, n);
    	if(res.size()!=0)
    	{
    		for (int i : res) 
            	cout << i << " ";
        	cout << endl;	
    	}
    	else
    		cout<<0<<endl;
    }

    return 0;
}  // } Driver Code Ends