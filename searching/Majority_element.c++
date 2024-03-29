// 5. Majority Element 
// Easy Accuracy: 48.6% Submissions: 54467 Points: 2
// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

// Example 1:

// Input:
// N = 3 
// A[] = {1,2,3} 
// Output:
// -1
// Explanation:
// Since, each element in 
// {1,2,3} appears only once so there 
// is no majority element.
// Example 2:

// Input:
// N = 5 
// A[] = {3,1,3,3,2} 
// Output:
// 3
// Explanation:
// Since, 3 is present more
// than N/2 times, so it is 
// the majority element.

// Your Task:
// The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.
 

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).
 

// Constraints:
// 1 <= N <= 107
// 0 <= Ai <= 106


// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int findnum(int a[],int n){
    int maj=0,count = 1;
    for(int i=1;i<n;i++){
        if(a[maj]== a[i])
           count++;
        else
           count--;
        if(count==0){
            maj = i;
            count = 1;
        }
          
    }
    return a[maj];
}
bool ismajority(int a[],int n, int cand){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]==cand){
            count++;
        }
        
    }
    if(count>n/2){
        return 1;
    }
    else{
        return 0;
    }
}
int majorityElement(int a[], int size)
{
        
    // your code here
    int cand = findnum(a,size);
    if(ismajority(a,size,cand)){
        return cand;
    }
    else{
        return -1;
    }
        
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends
