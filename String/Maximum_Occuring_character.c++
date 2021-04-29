// 21. Maximum Occuring Character 
// Basic Accuracy: 50.0% Submissions: 13791 Points: 1
// Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

// Example 1:

// Input:
// str = testsample
// Output: e
// Explanation: e is the character which
// is having the highest frequency.
// Example 2:

// Input:
// str = output
// Output: t
// Explanation:  t and u are the characters
// with the same frequency, but t is
// lexicographically smaller.
// Your Task:
// The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).
// Note: N = |s|

// Constraints:
// 1 ≤ |s| ≤ 100

// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
bool sortByVal(const pair<char, int> &a, const pair<char, int> &b) 
{ 
    return (a.second > b.second); 
}
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int n = str.length();
        int mp[256]={0};
        
        for(int i=0;i<n;i++){
           mp[str[i]]++;
        }
        int max = -1;
        char result;
      for(int i=0;i<256;i++){
          if(mp[i]>max){
              max=mp[i];
              result = (char)i;
          }
      }
      return result;
       
        
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends