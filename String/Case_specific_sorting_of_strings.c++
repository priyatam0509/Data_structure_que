29. Case-specific Sorting of Strings 
Medium Accuracy: 58.42% Submissions: 10974 Points: 4
Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Example 1:

Input:
N = 12
S = defRTSersUXI
Output: deeIRSfrsTUX
Explanation: Sorted form of given string
with the same case of character as that
in original string is deeIRSfrsTUX
Example 2:

Input:
N = 6
S = srbDKi
Output: birDKs
Explanation: Sorted form of given string
with the same case of character will
result in output as birDKs.
Your Task:
You only need to complete the function caseSort that returns sorted string.

Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(N).



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char>v1;
        vector<char>v2;
        for(int i=0;i<n;i++){
            if(str[i]>='a'&&str[i]<='z'){
                v1.push_back(str[i]);
            }
            else if(str[i]>='A'&& str[i]<='Z'){
                v2.push_back(str[i]);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(str[i]>='a'&&str[i]<='z'){
                str[i]=v1[j];
                ++j;
            }
             else if(str[i]>='A'&& str[i]<='Z'){
                str[i]=v2[k];
                ++k;
            }
        }
        return str;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends