3. Count Distinct Vowels in String 
Basic Accuracy: 67.5% Submissions: 1424 Points: 1
You are given a string s. You need to count the total distinct vowels in the string. The string s contains lowercase letters only.

Example 1:

Input:
geeks

Output: 
1
Example 2:

Input:
world

Output:
1
Your Task:

You only need to complete the function countVowels() that takes s as parameter and returns the count of distinct vowels in the string. 

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
    int countVowels(string str){
        
       //Your code here
      // count number of vowels present in string
      unordered_set<char>s;
      for(int i=0;i<str.length();i++){
          s.insert(str[i]);
      }
    int count =0; 
   
    for(auto x: s){
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
            count++;
        }
    }
    return count;
        
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
	cout << obj.countVowels(s) << endl;
	
	}
	return 0;
	
}

  // } Driver Code Ends