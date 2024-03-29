// 25. Minimum indexed character 
// Easy Accuracy: 50.58% Submissions: 12858 Points: 2
// Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. If no character of patt is present in str then print ‘No character present’.

// Example 1:

// Input:
// str = geeksforgeeks
// patt = set
// Output: e
// Explanation: e is the character which is
// present in given patt "geeksforgeeks"
// and is first found in str "set".
// Example 2:

// Input:
// str = adcffaet
// patt = onkl
// Output: No character present
// Explanation: There are none of the
// characters which is common in patt
// and str.
// Your Task:
// You only need to complete the function minIndexChar() that returns the index of answer in str or returns -1 in case no character of patt is present in str.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Number of distinct characters).


// { Driver Code Starts
// C++ implementation to find the character in first 
// string that is present at minimum index in second
// string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int n =str.length();
        int m = patt.length();
        
        unordered_map<char, int>um;
        
        int minIndex = INT_MAX;
        for(int i =0;i<n;i++){
            if(um.find(str[i])==um.end()){
                um[str[i]]=i;
            }
        }
        for(int i=0;i<m;i++){
            if(um.find(patt[i])!=um.end()&&um[patt[i]]<minIndex){
                minIndex = um[patt[i]];
            }
        }
        return minIndex == INT_MAX?-1:minIndex;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    Solution obj;
	    int ans = obj.minIndexChar(str, patt);
	    if(ans == -1)cout<<"No character present";
	    else cout<<str[ans];
	    cout<<endl;
	}return 0;
}
  // } Driver Code Ends