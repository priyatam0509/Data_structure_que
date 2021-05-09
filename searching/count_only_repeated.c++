9. Count only Repeated 
Medium Accuracy: 45.92% Submissions: 3558 Points: 4
Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single element which is repeating X (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.
Note: If there's no repeating element, Return {-1,-1}.


Example 1:

Input:
N = 5
arr[] = {1,2,3,3,4}
Output: 3 2
Explanation: In the given array, 3 is 
occuring two times.
Example 2:

Input:
N = 5
arr[] = {2,3,4,5,5}
Output: 5 2
Explanation: In the given array, 5 is 
occuring two times.
Example 3:

Input:
N = 3
arr[] = {1,2,3}
Output: -1 -1
Explanation: In the given array, there's no
repeating element, and thus the given Output.

Your Task:
Complete findRepeating function and return pair of element which is repeated and the number of times it is repeated. The printing is done by the driver code.


Constraints:
1 <= N <= 107
1 <= arr[i] <= 1015


Expected Time Complexity: O(logN)
Expected Auxilliary Space: O(1)



// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
   
    pair<int, int> findRepeating(int *arr, int n){
        //code here
        if(n==0){
            return {-1,-1};
        }
        int s =0;
        int e = n-1;
        while(s<e){
            int m =(s+e)/2;
            if(arr[m]>=m+arr[0]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
        return {arr[s],n-(arr[n-1]-arr[0])};
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends