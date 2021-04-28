// 17. Check if a string is Isogram or not 
// Basic Accuracy: 55.24% Submissions: 17159 Points: 1
// Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.

// Example 1:

// Input:
// S = machine
// Output: 1
// Explanation: machine is an isogram
// as no letter has appeared twice. Hence
// we print 1.
// Example 2:

// Input:
// S = geeks
// Output: 0
// Explanation: geeks is not an isogram
// as 'e' appears twice. Hence we print 0.
// Your Task:
// This is a function problem. You only need to complete the function isIsogram() that takes a string as a parameter and returns either true or false.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).
// Note: N = |S|

// Constraints:
// 1 <= |s| <= 103


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        int hash[256]={0};
        int n = s.length();
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        for(int i=0;i<256;i++){
            if(hash[i]>=2){
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends