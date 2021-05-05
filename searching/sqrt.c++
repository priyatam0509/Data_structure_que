// 4. Square root of a number 
// Medium Accuracy: 52.21% Submissions: 58171 Points: 4
// Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

 

// Example 1:

// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect 
// square, floor of square_root of 5 is 2.
// Example 2:

// Input:
// x = 4
// Output: 2
// Explanation: Since, 4 is a perfect 
// square, so its square root is 2.
 

// Your Task:
// You don't need to read input or print anything. The task is to complete the function floorSqrt() which takes x as the input parameter and return its square root.
// Note: Try Solving the question without using sqrt Function.

 

// Expected Time Complexity: O(log N)
// Expected Auxiliary Space: O(1)


// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    return sqrt(x);
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends

