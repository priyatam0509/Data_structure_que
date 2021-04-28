// 8. Naive Pattern Search 
// Easy Accuracy: 51.08% Submissions: 9150 Points: 2
// Given a string S and a pattern P both of lowercase characters. The task is to check if the given pattern exists in the given string or not.

// Example 1:

// Input:
// S = aabaacaadaabaaabaa
// P = aaba
// Output: Yes
// Explanation: Given pattern aaba is found
// in the string at index 0.
// Example 2:
// Input:
// S = aabaacaadaabaaabaa
// P = ccda
// Output: No
// Explanation: Given pattern ccda doesn't
// exists in the string at all.
// Your Task:
// The task is to complete the function search() which finds the pattern in the given string. The function takes pattern and string as parameters and returns either true or false. Return true if pattern exists else return false.

// Expected Time Complexity: O(N*M).
// Expected Auxiliary Space: O(1).
// Note: N = |S|, M = |P|.

// Constraints:

// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	
    	// Your code here
    	int n = txt.length();
    	int m = pat.length();
    	int j=0;
    	for(int i=0;i<=n-m;i++){
    	    for( j=0;j<m;j++){
    	       if(pat[j]!=txt[i+j]){
    	          break;
    	       }
    	    }
    	    if(j==m){
    	        return true;
    	    }
    	}
    	  return false;
    	
    }
};


// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}
  // } Driver Code Ends
