// 15. Check if strings are rotations of each other or not 
// Basic Accuracy: 49.96% Submissions: 14970 Points: 1
// Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.

 

// Example 1:

// Input:
// geeksforgeeks
// forgeeksgeeks
// Output: 
// 1
// Explanation: s1 is geeksforgeeks, s2 is
// forgeeksgeeks. Clearly, s2 is a rotated
// version of s1 as s2 can be obtained by
// left-rotating s1 by 5 units.
 

// Example 2:

// Input:
// mightandmagic
// andmagicmigth
// Output: 
// 0
// Explanation: Here with any amount of
// rotation s2 can't be obtained by s1.
 

// Your Task:
// The task is to complete the function areRotations() which checks if the two strings are rotations of each other. The function returns true if string 1 can be obtained by rotating string 2, else it returns false.

 

// Expected Time Complexity: O(N).
// Expected Space Complexity: O(N).
// Note: N = |s1|.

 

// Constraints:
// 1 <= |s1|, |s2| <= 107

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string a,string b)
    {
        // Your code here
         int n = a.length();
  int m = b.length();
  if (n != m)
    return false;
 

  int lps[n];
 
  
  int len = 0;
  int i = 1;
 
  lps[0] = 0;
 
  while (i < n)
  {
    if (a[i] == b[len])
    {
      lps[i] = ++len;
      ++i;
    }
    else
    {
      if (len == 0)
      {
        lps[i] = 0;
        ++i;
      }
      else
      {
        len = lps[len - 1];
      }
    }
  }
 
  i = 0;
 
  
  for (int k = lps[n - 1];
           k < m; ++k)
  {
    if (b[k] != a[i++])
      return false;
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
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends
