// 16. Sorting Elements of an Array by Frequency 
// Medium Accuracy: 47.44% Submissions: 19226 Points: 4
// Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

// Example 1:

// Input:
// N = 5
// A[] = {5,5,4,6,4}
// Output: 4 4 5 5 6
// Explanation: The highest frequency here is
// 2. Both 5 and 4 have that frequency. Now
// since the frequencies are same then 
// smallerelement comes first. So 4 4 comes 
// firstthen comes 5 5. Finally comes 6.
// The output is 4 4 5 5 6.
// Example 2:

// Input:
// N = 5
// A[] = {9,9,9,2,5}
// Output: 9 9 9 2 5
// Explanation: The highest frequency here is
// 3. The element 9 has the highest frequency
// So 9 9 9 comes first. Now both 2 and 5
// have same frequency. So we print smaller
// element first.
// The output is 9 9 9 2 5.
// Your Task:

// You only need to complete the function sortByFreq that takes arr, and n as parameters and returns the sorted array.

// Expected Time Complexity: O(NLogN).
// Expected Auxiliary Space: O(N). 

// Constraints:
// 1 ≤ N ≤ 105
// 1 ≤ Ai ≤ 105 

 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
 bool sortby(const pair<int,int>&a,const pair<int,int>&b){
      if(a.second==b.second){
          return a.first<b.first;
      }
      return a.second>b.second;
  }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        
        vector<int>res;
        unordered_map<int,int>m;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        copy(m.begin(),m.end(),back_inserter(v));
        sort(v.begin(),v.end(),sortby);
        for(int i=0;i<v.size();++i){
            while(v[i].second--){
                res.push_back(v[i].first);
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends