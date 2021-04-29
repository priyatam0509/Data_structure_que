// 19. Repeating Character - First Appearance Leftmost 
// Basic Accuracy: 69.05% Submissions: 5802 Points: 1
// You are given a string S (both uppercase and lowercase characters). You need to print the repeated character whose first appearance is leftmost.

// Example 1:

// Input:
// S = geeksforgeeks
// Output: g
// Explanation: We see that both e and g
// repeat as we move from left to right.
// But the leftmost is g so we print g.
// Example 2:

// Input:
// S = abcd
// Output: -1
// Explanation: No character repeats so
// we print -1.
// Your Task:
// This is a function problem. You only need to complete the function repeatedCharacter() that takes a string as a parameter and returns the index of the character. If no character repeats then return -1.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).

// Constraints:
// 1 <= |S| <= 100


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        //Your code here
        int hash[256]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]>1){
                return i;
            }
        }
      return -1;  
    } 
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    Solution obj;
	    int index = obj.repeatedCharacter(s); 
        if (index == -1) 
            cout<<-1<<endl;
        else
            cout<<s[index]<<endl;
	}
	return 0;
}
  // } Driver Code Ends