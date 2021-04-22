
// 2. Quadratic Probing in Hashing 
// Easy Accuracy: 54.59% Submissions: 4947 Points: 2
// Quadratic probing is a collision handling technique in hashing. Quadratic probing says that whenever a collision occurs, search for i2 position.

// Given an array of integers and a Hash table. Fill the elements of the array into the hash table by using Quadratic Probing in case of collisions.

// Example 1:

// Input:
// hashSize = 11
// N = 4
// Array[] = {21,10,32,43}
// Output: 
// 10 -1 -1 32 -1 -1 -1 -1 43 -1 2
// Explanation: 21%11=10 so 21 goes into 
// hashTable[10] position. 10%11=10. 
// hashTable[10] is already filled so we try 
// for (10+12)%11=0 position. hashTable[0] 
// is empty so we put 10 there. 32%11=10. 
// hashTable[10] is filled. We try 
// (32+12)%11=0. But hashTable[0] is also 
// already filled. We try (32+22)%11=3. 
// hashTable[3] is empty so we put 32 in 
// hashTable[3] position. 43 uses 
// (43+33)%11=8. We put it in hashTable[8].
// Example 2:

// Input:
// hashSize = 11
// N = 4
// Array[] = {880,995,647,172 }
// Output:
// 880 -1 -1 -1 -1 995 -1 172 -1 647 -1 
// Explanation: Using the similar approach 
// as used in above explanation we will get 
// the output like 
// 880 -1 -1 -1 -1 995 -1 172 -1 647 -1.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function QuadraticProbing() which takes the hash table hash[], the hash table size hashSize, an array arr[] and the size of the array N as inputs and inserts all the elements of the array arr[] into the hash table using Quadratic Probing as a collision handling technique.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 2 <= hashSize (prime) <= 97
// 1 <= N < hashSize*0.5
// 0 <= Array[] <= 105

// Note:
// All the positions that are unoccupied are denoted by -1 in the hash table.
// An empty slot can only be found if load factor < 0.5 and hash table size is a prime number.
// The given testcases satisfy the above condition so you can assume that an empty slot is always reachable.


// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N)
    {
        //Your code here
        for(int i=0;i<hash.size();i++){
            hash[i]=-1;
        }
        for(int i=0;i<N;i++){
            int j = arr[i]%hashSize;
            if(hash[j]==-1){
                hash[j]=arr[i];
            }
            else{
                int count =0;
                while(count!=hashSize&&hash[j]!=-1){
                    j= (arr[i]+count*count)%hashSize;
                    count++;
                }
                if(count!=hashSize){
                    hash[j]=arr[i];
                }
            }
        }
       
    }


};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}


  // } Driver Code Ends