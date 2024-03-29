// 14. Check if string is rotated by two places 
// Basic Accuracy: 41.08% Submissions: 29339 Points: 1
// Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

// Example 1:

// Input:
// a = amazon
// b = azonam
// Output: 1
// Explanation: amazon can be rotated anti
// clockwise by two places, which will make
// it as azonam.
// Example 2:

// Input:
// a = geeksforgeeks
// b = geeksgeeksfor
// Output: 0
// Explanation: If we rotate geeksforgeeks by
// two place in any direction , we won't get
// geeksgeeksfor.
// Your Task:
// The task is to complete the function isRotated() which takes two strings as input parameters and checks if given strings can be formed by rotations. The function returns true if string 1 can be obtained by rotating string 2 by two places, else it returns false.

// Expected Time Complexity: O(N).
// Expected Auxilary Complexity: O(N).
// Challenge: Try doing it in O(1) space complexity.

// Constraints:
// 1 <= length of a, b < 100

 // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         if (str1.length() != str2.length())
        return false;
    if(str1.length()<2){
      return str1.compare(str2) == 0;
    }
    string clock_rot = "";
    string anticlock_rot = "";
    int len = str2.length();
 
    // Initialize string as anti-clockwise rotation
    anticlock_rot = anticlock_rot +
                    str2.substr(len-2, 2) +
                    str2.substr(0, len-2) ;
 
    // Initialize string as clock wise rotation
    clock_rot = clock_rot +
                str2.substr(2) +
                str2.substr(0, 2) ;
 
    // check if any of them is equal to string1
    return (str1.compare(clock_rot) == 0 ||
            str1.compare(anticlock_rot) == 0);
}

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends