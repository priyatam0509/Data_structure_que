5. Two Repeated Elements 
Easy Accuracy: 47.19% Submissions: 12781 Points: 2
You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

Example 1:

Input:
N = 4
array[] = {1,2,1,3,4,3}
Output: 1 3
Explanation: In the given array, 
1 and 3 are repeated two times.
Example 2:

Input:
N = 2
array[] = {1,2,2,1}
Output: 2 1
Explanation: In the given array,
1 and 2 are repeated two times 
and second occurence of 2 comes 
before 1. So the output is 2 1.
Your Task:
The task is to complete the function repeatedElements() which takes array arr[] and an integer N as inputs (the size of the array is N + 2 and elements are in range[1, N]) and finds the two repeated element in the array and return them in a pair.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1). 

Constraints:
2 ≤ N ≤ 105
1 ≤ array[i] ≤ N


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find two repeated elements.
    pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here
        int f=0,s=0;
    pair<int,int> res;
    vector<int> check(N+2,0);
    for(int i=0;i<check.size();i++)
    {   check[arr[i]]++;
        if(check[arr[i]]==2)
         {
             f=s;
             s=arr[i];
         }
       
    }
    res.first=f;
    res.second=s;
    return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        pair<int , int>res;
        res = obj.twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends

 