// 13. String Validation 
// Easy Accuracy: 44.92% Submissions: 1751 Points: 2
// Given a string s representing a password, you need to check if the string is valid or not. A valid string has the following properties:

// String must have the length greater than or equal to 10.
// String must contain at least 1 numeric character.
// String must contain at least 1 uppercase character.
// String must contain at least 1 lowercase character.
// String must contain at least 1 special character from @#$-*.
 

// Example 1:

// Input: eHello123@
// Output: 1
// Explanation: String is valid.

 

// Example 2:

// Input: hella
// Output: 0
// Explanation: String is not valid.
 

// Your Task:
// You don't need to read input or print anything. Complete the function validate() which takes string s as input parameter and returns true if the string is valid, else it returns false.
 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
bool validate(string s);
int main() {
	int t;
	string tc;
    getline(cin, tc);
    t=stoi(tc);
	while(t--)
	{
	    string s;
	    getline(cin, s);
	    cout<<validate(s)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

//Complete this function
bool validate(string s)
{
   //Your code here
   bool b1=false,b2=false,b3=false,b4=false;
    if(s.length()<10)
    return false;
    for(int i=0;i<s.length();i++)
    {
        if(isdigit(s[i]))
           b1=true;
        if(islower(s[i]))
          b2=true;
        if(isupper(s[i]))
          b3=true;
        if(s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='-'||s[i]=='*')
         b4=true;
    }
    return(b1&&b2&&b3&&b4);
}
