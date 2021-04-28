4. Count Words in String 
Basic Accuracy: 73.47% Submissions: 1533 Points: 1
You are given a string s consisting of multiple words. You need to count the total words in the string. Words are separated by a single space.

Example 1:

Input:
s = Geeks

Output: 
1
Example 2:

Input:
s = World is hello

Output: 
3
Your Task:

You only need to complet the function countWords() that takes s as parameter and returns the count of words in the string. 

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int countWords(string str){
        
        //Your code here
        int count =1;
        for(int i=0;i<str.length();i++){
            if(isblank((str[i]))){
                count++;
            }
        }
        return count;
    }
};


// { Driver Code Starts.
int main() {
	int t;
	string tc;
    getline(cin, tc);
    t=stoi(tc);
	while(t--)
	{   
	    string s;
	    getline(cin, s);
	    Solution obj;
	    cout << obj.countWords(s) << endl;
	}
	return 0;
	
}

  // } Driver Code Ends
