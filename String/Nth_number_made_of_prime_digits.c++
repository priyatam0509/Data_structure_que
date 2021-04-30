27. Nth number made of prime digits 
Easy Accuracy: 48.4% Submissions: 1516 Points: 2
Given a number 'N'. The task is to find the Nth number whose each digit is a prime number i.e 2, 3, 5, 7. In other words you have to find nth number of this sequence : 2, 3, 5, 7, 22, 23 ,.. and so on.

Example 1:

Input:
N = 10
Output: 33
Explanation:10th number in the sequence of
numbers whose each digit is prime is 33.
Example 2:

Input:
N = 21
Output: 222
Explanation:21st number in the sequence of
numbers whose each digit is prime is 222.
Your Task:
Complete primeDigits function and return the nth number of the given sequence made of prime digits.


// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int number)
    {
        //code here
          int rem;
    string num;
    while (number) {
        // remainder for check element position
        rem = number % 4;
        switch (rem) {
 
        // if number is 1st position in tree
        case 1:
            num.push_back('2');
            break;
 
        // if number is 2nd position in tree
        case 2:
            num.push_back('3');
            break;
 
        // if number is 3rd position in tree
        case 3:
            num.push_back('5');
            break;
 
        // if number is 4th position in tree
        case 0:
            num.push_back('7');
            break;
        }
 
        if (number % 4 == 0)
           number--;
 
        number = number / 4;
    }
    reverse(num.begin(), num.end());
    
    return stoi(num);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}
  // } Driver Code Ends