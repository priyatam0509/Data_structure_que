
// 3. Non Repeating Character 
// Easy Accuracy: 49.1% Submissions: 18166 Points: 2
// Given a string S consisting of lowercase Latin Letters. Find the first non-repeating character in S.

// Example 1:

// Input:
// S = hello
// Output: h
// Explanation: In the given string, the
// first character which is non-repeating
// is h, as it appears first and there is
// no other 'h' in the string.
// Example 2:

// Input:
// S = zxvczbtxyzvy
// Output: c
// Explanation: In the given string, 'c' is
// the character which is non-repeating. 
// Your Task:
// You only need to complete the function nonrepeatingCharacter() that takes string S as a parameter and returns the character. If there is no non-repeating character then return '$' .

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).
// Note: N = |S|

// Constraints:
// 1 <= N <= 103

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n =S.length();
       vector<int>v(123,0);
       for(int i=0;i<n;i++){
           v[S[i]]++;
       }
       for(int i=0;i<n;i++){
           if(v[S[i]]==1){
               return S[i];
           }
       }
       return '$';
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends