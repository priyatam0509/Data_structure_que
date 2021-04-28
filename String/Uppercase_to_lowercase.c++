7. Uppercase to Lowercase 
Easy Accuracy: 90.31% Submissions: 1052 Points: 2
You are given a string s. You need to convert the case of uppercase letters to lowercase letters.

Example 1:

Input:
GeekS

Output: 
geeks
Example 2:

Input:
FOR

Output: 
for
Your Task:

You only need to complete the function caseConversion() that takes s as parameter and returns the converted string. 

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000



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
        for(int i=0;i<str.length();i++){
            if(str[i]>=65 && str[i]<=90){
                str[i] = str[i]+32;
            }
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