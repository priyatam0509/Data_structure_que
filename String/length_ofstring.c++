1. Length of String 
Basic Accuracy: 93.09% Submissions: 1429 Points: 1
You are given a string s. You need to find the length of the string.

Example 1:

Input:
s = Geeks
Output: 
5
Example 2:

Input:
s = Hello1234
Output: 
9
Your Task:
You only need to complete the function lengthString() that takes s as parameter and returns the length of the string. 

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).


//Initial Template for C

#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

int lengthString(char str[])
{
    //Your code here
    int count =0;
    int i=0;
    while(str[i]){
        count++;
        i++;
    }
    return count;
}

// { Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    
	char str[100005];
	scanf("%s", &str);
	printf("%d\n", lengthString(str) );
	}
	
	return 0;
	
}  // } Driver Code Ends