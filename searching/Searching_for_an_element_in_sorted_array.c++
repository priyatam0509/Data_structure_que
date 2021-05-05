// 2. Searching an element in a sorted array 
// Basic Accuracy: 51.08% Submissions: 22773 Points: 1
// Given a sorted array of size N and an integer K. Check if K is present in the array or not.


// Example 1:

// Input:
// N = 5, K = 6
// arr[] = {1,2,3,4,6}
// Output: 1
// Exlpanation: Since, 6 is present in 
// the array at index 4 (0-based indexing),
// output is 1.
 

// Example 2:

// Input:
// N = 5, K = 2
// arr[] = {1,3,4,5,6}
// Output: -1
// Exlpanation: Since, 2 is not present 
// in the array, output is -1.
 

// Your Task:
// You don't need to read input or print anything. Complete the function searchInSorted() which takes the sorted array arr[], its size N and the element K as input parameters and returns 1 if K is present in the array, else it returns -1. 


// Expected Time Complexity: O(Log N)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1 <= N <= 106
// 1 <= K <= 106
// 1 <= arr[i] <= 106

// // { Driver Code Starts
// //Initial Template for C

// #include <stdio.h> 


//  // } Driver Code Ends
// //User function Template for C

int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       int low = 0;
       int high =N-1;
       
       while(low<=high){
           int mid = ((low+high)/2);
           if(arr[mid]==K){
               return 1;
           }
           else if(arr[mid]>K){
               high = mid-1;
           }
           else{
               low = mid +1;
           }
       }
       return -1;
       
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        printf("%d\n", searchInSorted(arr, n, k));

    }

	return 0; 
} 
  // } Driver Code Ends
