// 18. Longest consecutive subsequence 
// Medium Accuracy: 48.9% Submissions: 36578 Points: 4
// Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
 

// Example 1:

// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// Output:
// 6
// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6 
// numbers form the longest consecutive
// subsquence.
// Example 2:

// Input:
// N = 7
// a[] = {1,9,3,10,4,20,2}
// Output:
// 4
// Explanation:
// 1, 2, 3, 4 is the longest
// consecutive subsequence.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findLongestConseqSubseq() which takes the array arr[] and the size of the array as inputs and returns the length of the longest subsequence of consecutive integers. 


// Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).



// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int>s(arr,arr+N);
        int res =1;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int curr =1;
                while(s.find(x+curr)!=s.end()){
                    curr++;
                }
                res = max(res,curr);
            }
        }
        return res;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends