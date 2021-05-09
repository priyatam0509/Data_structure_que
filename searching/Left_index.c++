// 1. Left Index 
// Basic Accuracy: 51.24% Submissions: 10351 Points: 1
// Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.

// Example 1:

// Input:
// N = 10
// arr[] = {1,1,2,2,3,4,5,5,6,7}
// x = 1
// Output: 0
// Explanation: 1 is present two times
// in the array and its leftmost index 
// is 0.
// Example 2:

// Input:
// N = 7
// arr[] = {10,20,20,20,20,20,20}
// x = 20
// Output: 1
// Explanation: 20 is present 5 time, 
// but its leftmost index is 1.
// Your Task:
// The task is to complete the function leftIndex() which takes the array arr[], its size N and an integer x as inputs and returns the index of leftmost occurrence of x in given input array. It returns -1 if element is not present in the array.

// Expected Time Complexity: O(LogN).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= N <= 106
// 1 <= arr[i] <= 106
// 1 <= x <= 106

// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
// Function to find element in sorted array

int leftIndex(int N, int arr[], int x){
    
    // Your code here
    int low =0, high = N-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            if(mid==0||arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
    
}




// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}  // } Driver Code Ends