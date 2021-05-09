// 1. Allocate minimum number of pages 
// Hard Accuracy: 48.87% Submissions: 10374 Points: 8
// You are given N number of books. Every ith book has Ai number of pages. 
// You have to allocate books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is minimum of those in all the other permutations and print this minimum value. 

// Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).


// Example 1:

// Input:
// N = 4
// A[] = {12,34,67,90}
// M = 2
// Output:
// 113
// Explanation: 
// Allocation can be done in following ways:
// {12} and {34, 67, 90} Maximum Pages = 191
// {12, 34} and {67, 90} Maximum Pages = 157
// {12, 34, 67} and {90}  Maximum Pages =113
// Therefore, the minimum of these cases is 
// 113, which is selected as the output.
// Example 2:

// Input:
// N = 3
// A[] = {15,17,20}
// M = 2
// Output:
// 32
// Explanation:
// Allocation is done as 
// {15,17} and {20}

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers N, and m and an array A[] of length N as input and returns the expected answer.


// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(1)


// Constraints:
// 1 <= N <= 105
// 1 <= A [ i ] <= 106
// 1 <= M <= 105

// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isFeasible(int arr[],int n,int k,int ans){
        int req=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>ans){
                req++;
                sum = arr[i];
                
            }
            else{
                sum+=arr[i];
            }
        }
        return (req<=k);
    }
    int findPages(int arr[], int n, int k) 
    {
        //code here
        int sum=0,mx=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mx = max(mx,arr[i]);
        }
        int low = mx, high=sum, res=0;
        while(low<=high){
            int mid = (low+high)/2;
            if(isFeasible(arr,n,k,mid)){
                res=mid;
                high=mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Endss
