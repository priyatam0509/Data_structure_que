6. Lowercase to Upercase 
Basic Accuracy: 82.7% Submissions: 1170 Points: 1
You are given a string s. You need to convert the case of lowercase letter to uppercase letters.

Example 1:

Input:
Geeks
Output: 
GEEKS
Example 2:

Input:
for
Output: 
FOR
Your Task:

You only need to complete the function caseConversion() that takes s as parameter and returns the  converted string. 

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:



// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    string caseConversion(string str){
        
        //Your code here
      string s;
      int n = str.length();
      for(int i=0;i<=n;i++){
          if(str[i]>=97)
          str[i] = str[i]-32;
      }
      return str;
        
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	
	string s;
	cin >> s;
	Solution obj;
	cout << obj.caseConversion(s) << endl;
	
	}
	
	return 0;
	
}

  // } Driver Code Ends
