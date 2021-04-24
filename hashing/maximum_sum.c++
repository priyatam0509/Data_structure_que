// 8. Maximium Sum 
// Easy Accuracy: 47.94% Submissions: 1374 Points: 2
// You are Given an array A[] of  N Integers and an integer K. You have to choose one element one by one K 
// times. You can only pick the element whose frequency is maximum. The element will be removed from the array after being chosen. If there are many elements with the maximum frequency then you can choose any. Your aim is to maximize the sum.

 

// Your Task:

// You don't need to read input or print anything. Your task is to complete the function maximum_sum() which takes the N (number of elements in Array A) ,array A[] and K as input parameters and returns the maximum sum by choosing K elements.

 

// Example 1:

// Input:
// N=5 
// K=3
// A[]={1, 1, 2, 3, 3} 
// Output:
// 7
// Explanation:
// 3+1+3=7
 

// Expected Time Complexity: O(N*LogN)
// Expected Auxiliary Space: O(N)

 

// Constraints:
// 1<=K<=N<=10^5
1<=A[i]<=10^5 



// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
  public:
   long maximum_sum(int N,vector<int> A,int K)
{
   unordered_map<int,int> mp;
   int i=0;
   for(i=0;i<A.size();i++){
        if(mp.find(A[i])==mp.end()){
            mp[A[i]] = 1;
        }
        else
            mp[A[i]]++;
   }
    priority_queue<pair<int,int>> pq;
    for(auto itr: mp){
        pq.push({itr.second, itr.first});
    }
    long ans = 0;
    for(i=1;i<=K;i++){
        pair<int,int> p = pq.top();
        ans += p.second;
        pq.pop();
        pq.push({p.first-1, p.second});
    }
    return ans;
}
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        
        for(int i=0;i<n;i++)
        cin>>v[i];
        Solution obj;
        cout<< obj.maximum_sum(n,v,k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends