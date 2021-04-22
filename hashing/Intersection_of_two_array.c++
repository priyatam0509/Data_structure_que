
// 6. Intersection of two arrays 
// Easy Accuracy: 45.86% Submissions: 15304 Points: 2
// Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

// For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

// Example 1:

// Input:
// 5 3
// 89 24 75 11 23
// 89 2 4

// Output: 
// 1

// Explanation: 
// 89 is the only element 
// in the intersection of two arrays.
// Example 2:

// Input:
// 6 5
// 1 2 3 4 5 6
// 3 4 5 6 7 

// Output: 
// 4

// Explanation: 
// 3 4 5 and 6 are the elements 
// in the intersection of two arrays.
// Your Task:
// The task is to complete the function NumberofElementsInIntersection() which takes 4 inputs ie- array a, array b, n which is the size of array a, m which is the size of array b. The function should return the count of the number of elements in the intersection.

// Expected Time Complexity: O(n + m).
// Expected Auxiliary Space: O(min(n,m)).

// Constraints:
// 1 ≤ n, m ≤ 105
// 1 ≤ a[i], b[i] ≤ 105

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes here
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        int count =0;
        for(int i=0;i<m;i++){
            if(s.find(b[i])!=s.end()){
                count++;
                s.erase(b[i]);
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
		Solution ob;
		cout << ob.NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends