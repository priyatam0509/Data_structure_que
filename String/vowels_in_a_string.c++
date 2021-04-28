2. Vowels in String 
Basic Accuracy: 92.26% Submissions: 77 Points: 1
You are given a string s. You need to count the total vowels in the string. The string s contains lowercase letters only.

Example 1:

Input:
s = geeks
Output: 
2
Example 2:

Input:
s = world
Output: 
1
Your Task:

You only need to complet the function countVowels() that takes s as parameter and returns the count of vowels in the string. 

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).


// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int countVowels(string str)
{
    // count number of vowels present in string
    int count =0; 
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    return count;
}

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin >> str;
	    cout << countVowels(str) << endl;
	}
}  // } Driver Code Ends

